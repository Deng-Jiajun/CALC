#include"calculate.h"
//?????????
bool IsOperator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return true;
    else
        return false;
}
//???????
bool IsDigit(char c)
{
    if (c >= '0'&&c <= '9')
        return true;
    else
        return false;
}
//?????
double ReadValue(std::string::iterator &it)
{
    double result(0);
    int power(0);//???????

    //????
    while (IsDigit(*it))
    {
        result = result * 10 + (*it - '0');
        ++it;
    }

    //????
    if (*it == '.')
    {
        ++it;
        while (IsDigit(*it))
        {
            result = result * 10 + (*it - '0');
            ++it;
            ++power;
        }
    }
    return result / pow(10, power);
}

//?????
int Priority(char c)
{
    if (c == '(')
        return 0;

    if (c == '+' || c == '-')
        return 1;

    if (c == '*' || c == '/')
        return 2;
    else
        return -1;
}

//?????????????Postfix
std::string Postfix(const std::string &expr)
{
    std::string postfix;
    std::stack<char> cstack;

    auto it = expr.begin();
    while (it != expr.end())
    {
        if (IsDigit(*it) || *it == '.')//???????????????
        {
            postfix.push_back(*it);
        }
        else
            if (*it == '(')// '('????
                cstack.push(*it);
            else
                if (*it == ')')// ?'('??????????????
                {
                    while (cstack.top() != '(')
                    {
                        postfix.push_back(cstack.top());
                        cstack.pop();
                    }
                    cstack.pop();//?'('??
                }
                else
                    if (IsOperator(*it))
                    {
                        postfix.push_back(' ');//???????
                        while (!cstack.empty() && (Priority(*it) <= Priority(cstack.top())))
                        {
                            //??????????
                            //?????????????????????????????????????????????
                            postfix.push_back(cstack.top());
                            cstack.pop();
                        }
                        cstack.push(*it);//????????????????????????
                    }
        ++it;
    }
    while (!cstack.empty())
    {
        postfix.push_back(cstack.top());
        cstack.pop();
    }
    return postfix;
}

//???????
double PostfixValue(std::string &expr)
{

    std::stack<double> dstack;
    double a, b;
    auto it = expr.begin();
    while (it != expr.end())
    {
        if (IsDigit(*it))
        {
            dstack.push(ReadValue(it));
        }
        else
            if (*it == ' ')
                ++it;
            else
                if (*it == '+')
                {
                    b = dstack.top();
                    dstack.pop();
                    a = dstack.top();
                    dstack.pop();
                    dstack.push(a + b);
                    ++it;
                }
                else
                    if (*it == '-')
                    {
                        b = dstack.top();
                        dstack.pop();
                        a = dstack.top();
                        dstack.pop();
                        dstack.push(a - b);
                        ++it;
                    }
                    else
                        if (*it == '*')
                        {
                            b = dstack.top();
                            dstack.pop();
                            a = dstack.top();
                            dstack.pop();
                            dstack.push(a * b);
                            ++it;
                        }
                        else
                            if (*it == '/')
                            {
                                b = dstack.top();
                                dstack.pop();
                                a = dstack.top();
                                dstack.pop();
                                dstack.push(a / b);
                                ++it;
                            }
    }
    return dstack.top();

}


bool IsValid(const QString &Qstr)
{
    std::string expr=Qstr.toStdString();
    int left=0,right=0;
    if(IsOperator(expr.back()))
        return false;
    for(auto &c:expr)
    {
        if(!IsDigit(c)&&!IsOperator(c)&&c!='.')
        {
            if(c=='(')
                ++left;
            else if(c==')')
                    ++right;
            else
            return false;
        }
    }
    if(left!=right)
        return false;
    return true;
}

LargeNumber ReadValueLarge(std::string::iterator &it)
{
    LargeNumber result("0");
    while (IsDigit(*it))
    {
        result = result*LargeNumber("10") + LargeNumber(*it);
        ++it;
    }
    return result;
}



LargeNumber PostfixValueLarge(std::string &expr)
{
    std::stack<LargeNumber> Lstack;
    LargeNumber a, b;
    auto it = expr.begin();
    while (it!=expr.end())
    {
        if (IsDigit(*it))
            Lstack.push(ReadValueLarge(it));
        else
            if (*it == ' ')
                ++it;
            else
                if (*it == '+')
                {
                    b = Lstack.top();
                    Lstack.pop();
                    a = Lstack.top();
                    Lstack.pop();
                    Lstack.push(a + b);
                    ++it;
                }
                else
                    if (*it == '-')
                    {
                        b = Lstack.top();
                        Lstack.pop();
                        a = Lstack.top();
                        Lstack.pop();
                        Lstack.push(a - b);
                        ++it;
                    }
                    else
                        if (*it == '*')
                        {
                            b = Lstack.top();
                            Lstack.pop();
                            a = Lstack.top();
                            Lstack.pop();
                            Lstack.push(a * b);
                            ++it;
                        }
                        else
                            if (*it == '/')
                            {
                                b = Lstack.top();
                                Lstack.pop();
                                a = Lstack.top();
                                Lstack.pop();
                                Lstack.push(a / b);
                                ++it;
                            }
    }
    return Lstack.top();
}
QString CalculateResult(const QString &Qstr)
{
    std::string expr=Qstr.toStdString();
    expr=Postfix(expr);
    double result=PostfixValue(expr);
    return QString::number(result,'f',6);
}


QString CalculateResultLarge(const QString &Qstr)
{
    std::string expr=Qstr.toStdString();
    expr=Postfix(expr);
    LargeNumber result=PostfixValueLarge(expr);
    return QString::fromStdString(result.number());
}


