#include<string>
#include<iostream>
#include"LargeNumber.h"

const LargeNumber ZERO;
LargeNumber::LargeNumber(const std::string &num) : number_(num) {  }
LargeNumber::LargeNumber(const char &c) { number_.push_back(c); }
LargeNumber::LargeNumber(const LargeNumber &Largenum) : number_(Largenum.number_) {  }
LargeNumber abs(const LargeNumber &num)
{
    LargeNumber result(num);
    if (result < ZERO)
        result.number_.erase(result.number_.begin());
    return result;
}
LargeNumber& LargeNumber::operator-(void)
{
    number_.insert(number_.begin(), '-');
    return *this;
}
LargeNumber LargeNumber::CutZero(void)
{
    std::string::iterator ite = (*number_.begin() == '-') ? number_.begin() + 1 : number_.begin(), b = ite;

    while (ite != number_.end() - 1 && *ite == '0') ++ite;
    number_.erase(b, ite);
    //去除前导0后，结果为-0,则将值改为0
    if (number() == "-0") number_ = "0";
    return *this;
}

std::ostream& operator<<(std::ostream &os, const LargeNumber &num)
{
    os << num.number_;
    return os;
}
std::istream& operator>>(std::istream &is, LargeNumber &num)
{

    if (is >> num.number_)
    {
        //流无错误，处理前导0
        num.CutZero();
    }
    else
        num = LargeNumber();//流出错，数值转为0
    return is;
}
bool operator<(const LargeNumber &lhs, const LargeNumber &rhs)
{
    LargeNumber left_side(lhs), right_side(rhs);
    left_side.CutZero(); right_side.CutZero();

    if (left_side == right_side) return false;

    if (left_side.number().at(0) == '-' && right_side.number().at(0) != '-') return true;
    if (left_side.number().at(0) != '-' && right_side.number().at(0) == '-') return false;

    if (left_side.number().at(0) != '-' && right_side.number().at(0) != '-')
    {
        if (left_side.number().size() < right_side.number().size()) return true;
        if (left_side.number().size() > right_side.number().size()) return false;

        if (left_side.number().size() == right_side.number().size())
        {
            if (left_side.number() < right_side.number())return true;
            if (left_side.number() > right_side.number())return false;
        }
    }

    if (left_side.number().at(0) == '-' && right_side.number().at(0) == '-')
    {
        left_side = abs(left_side); right_side = abs(right_side);
        return !(left_side < right_side);
    }
}
bool operator<=(const LargeNumber &lhs, const LargeNumber &rhs)
{
    return (lhs < rhs || lhs == rhs);
}
bool operator>(const LargeNumber &lhs, const LargeNumber &rhs)
{
    if (lhs == rhs) return false;//相等返回false,则 下方 lhs<rhs 的比较中不包含 lhs==rhs 的可能
    return !(lhs < rhs);
}
bool operator>=(const LargeNumber &lhs, const LargeNumber &rhs)
{
    return (lhs > rhs || lhs == rhs);
}
bool operator==(const LargeNumber &lhs, const LargeNumber &rhs)
{
    LargeNumber left_side(lhs), right_side(rhs);
    left_side.CutZero(); right_side.CutZero();
    return (left_side.number() == right_side.number());
}
bool operator!=(const LargeNumber &lhs, const LargeNumber &rhs)
{
    return !(lhs == rhs);
}

LargeNumber operator+(const LargeNumber &lhs, const LargeNumber &rhs)
{
    LargeNumber left_side(lhs), right_side(rhs);
    left_side.CutZero(); right_side.CutZero();
    //0值判断
    if (left_side == ZERO && right_side == ZERO) return ZERO;
    if ((left_side == ZERO && right_side != ZERO) || (left_side != ZERO && right_side == ZERO))
    {
        return left_side != ZERO ? left_side : right_side;
    }

    if (left_side < right_side) swap(left_side.number_, right_side.number_);//大数在左

    //正+正
    if (left_side > ZERO && right_side > ZERO)
    {

        std::string::iterator  left_beg(left_side.number_.begin());
        std::string::iterator  left_ite(left_side.number_.end());
        std::string::iterator right_beg(right_side.number_.begin());
        std::string::iterator right_ite(right_side.number_.end());
        bool carry = false;//进位

        while (left_ite != left_beg)
        {
            int tmp;
            if (right_ite != right_beg)
                tmp = *(--left_ite) + *(--right_ite) + carry - '0';
            else
                tmp = *(--left_ite) + carry;

            carry = false;//进位被使用

            if (tmp > '9')
            {
                tmp -= 10;
                carry = true;
            }
            *left_ite = tmp;
        }

        if (carry) left_side.number_.insert(left_beg, '1');
        return left_side;
    }

    //正+负
    if (left_side > ZERO && right_side < ZERO)
    {
        return left_side - abs(right_side);
    }

    //负+负 <=> -(正+正)
    if (left_side < ZERO && right_side < ZERO)
    {
        return -(abs(left_side) + abs(right_side));
    }
    return ZERO;
}

LargeNumber& LargeNumber::operator+=(const LargeNumber &rhs)
{
    *this = *this + rhs;
    return *this;
}

LargeNumber& LargeNumber::operator++(void)
{
    *this += LargeNumber("1");
    return *this;
}
LargeNumber LargeNumber::operator++(int)
{
    LargeNumber result = *this;
    *this += LargeNumber("1");
    return result;
}
LargeNumber operator-(const LargeNumber &lhs, const LargeNumber &rhs)
{
    LargeNumber left_side(lhs), right_side(rhs);
    left_side.CutZero(); right_side.CutZero();
    //0值判断
    if (left_side != ZERO && right_side == ZERO) return left_side;
    if (left_side == ZERO && right_side != ZERO)
    {
        return (right_side > ZERO) ? -right_side : abs(right_side);
    }



    //相等数值相减
    if (left_side == right_side) return ZERO;
    //正-正
    if (left_side > ZERO && right_side > ZERO)
    {
        bool flag(false);
        if (left_side < right_side)
        {
            swap(left_side.number_, right_side.number_);//大数在左
            flag = true;//负号标记
        }
        std::string::iterator  left_beg(left_side.number_.begin());
        std::string::iterator  left_ite(left_side.number_.end());
        std::string::iterator right_beg(right_side.number_.begin());
        std::string::iterator right_ite(right_side.number_.end());
        bool back = false;//退位

        while (left_ite != left_beg)
        {
            int tmp;
            if (right_ite != right_beg)
                tmp = *(--left_ite) - *(--right_ite) - back + '0';
            else
                tmp = *(--left_ite) - back;
            back = false;//退位被使用

            if (tmp < '0')
            {
                tmp += 10;
                back = true;
            }
            *left_ite = tmp;
        }

        left_side.CutZero();

        return flag ? -left_side : left_side;
    }

    //负-负
    if (left_side < ZERO && right_side < ZERO)
    {
        return abs(right_side) - abs(left_side);
    }

    //正-负
    if (left_side > ZERO && right_side < ZERO)
    {

        return left_side + abs(right_side);
    }
    //负-正 <=> 负+负
    if (left_side < ZERO && right_side > ZERO)
    {
        return left_side + -right_side;
    }
    return ZERO;
}

LargeNumber& LargeNumber::operator-=(const LargeNumber &rhs)
{
    *this = *this - rhs;
    return *this;
}
LargeNumber& LargeNumber::operator--(void)
{
    *this -= LargeNumber("1");
    return *this;
}
LargeNumber LargeNumber::operator--(int)
{
    LargeNumber result = *this;
    *this -= LargeNumber("1");
    return result;
}
LargeNumber operator*(const LargeNumber &lhs, const LargeNumber &rhs)
{
    LargeNumber left_side(lhs), right_side(rhs);
    left_side.CutZero(); right_side.CutZero();

    //0值
    if (left_side == ZERO || right_side == ZERO) return ZERO;

    if (left_side < right_side)
        swap(left_side.number_, right_side.number_);//大数在左

    //正*正
    if (left_side > ZERO && right_side > ZERO)
    {
        if (right_side.number_.size() == 1)
        {
            LargeNumber result(ZERO);
            int count = right_side.number_.at(0) - '0';
            while (count--)
                result += left_side;
            return result;
        }
        else
        {
            LargeNumber result(ZERO), tmp(ZERO);
            std::string::iterator right_beg(right_side.number_.begin());
            std::string::iterator right_ite(right_side.number_.end());
            std::string zero;
            while (right_ite != right_beg)
            {
                tmp.number_ = *--right_ite;
                tmp *= left_side;
                tmp.number_ += zero;
                result += tmp;
                zero += '0';
            }
            return result;
        }
    }
    //正*负 去负号，正*正，补负号
    if (left_side > ZERO && right_side < ZERO)
    {
        return -(left_side*abs(right_side));
    }
    //负*负 去负号，正*正
    if (left_side < ZERO && right_side < ZERO)
    {
        return abs(left_side)*abs(right_side);
    }
    return ZERO;
}
LargeNumber& LargeNumber::operator*=(const LargeNumber &rhs)
{
    *this = *this * rhs;
    return *this;
}
LargeNumber operator/(const LargeNumber &lhs, const LargeNumber &rhs)
{
    LargeNumber left_side(lhs), right_side(rhs);
    left_side.CutZero(); right_side.CutZero();

    //0值
    if (left_side == ZERO || right_side == ZERO) return ZERO;

    //相等，值为1
    if (left_side == right_side) return LargeNumber("1");

    //除数的模小于被除数的模
    if (abs(left_side) < abs(right_side))
    {
        return ZERO;
    }
    //正/正
    if (left_side > ZERO && right_side > ZERO)
    {
        LargeNumber result(ZERO);
        int digit_difference = left_side.number_.size() - right_side.number_.size();
        right_side.number_.insert(right_side.number_.end(), digit_difference, '0');//补0对齐
        while (left_side > ZERO && digit_difference >= 0)
        {
            LargeNumber tmp("0");
            while (left_side >= right_side)
            {
                left_side -= right_side;
                ++tmp;
            }
            tmp.number_.insert(tmp.number_.end(), digit_difference, '0');
            result += tmp;
            --digit_difference;
            right_side.number_.erase(right_side.number_.end() - 1);
        }
        return result;
    }
    //正/负||负/正
    if ((left_side<ZERO&&right_side>ZERO) || (left_side > ZERO&&right_side < ZERO))
    {
        return -(abs(left_side) / abs(right_side));
    }
    //负/负
    if (left_side < ZERO && right_side < ZERO)
    {
        return abs(left_side) / abs(right_side);
    }
    return ZERO;
}
LargeNumber& LargeNumber::operator/=(const LargeNumber &rhs)
{
    *this = *this / rhs;
    return *this;
}
