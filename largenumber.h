#ifndef LARGENUMBER_H
#define LARGENUMBER_H

//大数,只接受值有负号，不支持正号
class LargeNumber
{
    friend std::ostream& operator<<(std::ostream&, const LargeNumber&);
    friend std::istream& operator>>(std::istream&, LargeNumber&);

    friend bool operator<(const LargeNumber&, const LargeNumber&);
    friend bool operator<=(const LargeNumber&, const LargeNumber&);
    friend bool operator>(const LargeNumber&, const LargeNumber&);
    friend bool operator>=(const LargeNumber&, const LargeNumber&);
    friend bool operator==(const LargeNumber&, const LargeNumber&);
    friend bool operator!=(const LargeNumber&, const LargeNumber&);

    friend LargeNumber abs(const LargeNumber&);
    friend LargeNumber operator+(const LargeNumber&, const LargeNumber&);
    friend LargeNumber operator-(const LargeNumber&, const LargeNumber&);
    friend LargeNumber operator*(const LargeNumber&, const LargeNumber&);
    //类似整形除法，忽略余数,除数或被除数为0，则结果为0
    friend LargeNumber operator/(const LargeNumber&, const LargeNumber&);
public:
    LargeNumber() :number_("0") { }
    LargeNumber(const std::string &);
    LargeNumber(const char &);//计算器程序需要而添加的构造函数
    LargeNumber(const LargeNumber &);
    ~LargeNumber() = default;
    //去掉前导0，当值为“-00000”时，值为0
    LargeNumber CutZero(void);
    const std::string number(void) { return number_; }
    LargeNumber& operator-(void);
    LargeNumber& operator+=(const LargeNumber&);
    LargeNumber& operator-=(const LargeNumber&);
    LargeNumber& operator*=(const LargeNumber&);
    LargeNumber& operator/=(const LargeNumber&);
    LargeNumber& operator++(void);
    LargeNumber  operator++(int);
    LargeNumber& operator--(void);
    LargeNumber  operator--(int);
private:
    std::string number_;
};

#endif // !LARGENUMBER_H
