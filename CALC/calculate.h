#ifndef CALCULATE_H
#define CALCULATE_H
#include<stack>
#include<string>
#include<cmath>
#include<QString>
#include "largenumber.h"
bool IsValid(const QString&);
bool IsOperator(char);
bool IsDigit(char);
double ReadValue(std::string::iterator&);
LargeNumber ReadValueLarge(std::string::iterator&);
int Priority(char);
std::string Postfix(const std::string&);
double PostfixValue(std::string&);
LargeNumber PostfixValueLarge(std::string&);
QString CalculateResult(const QString&);
QString CalculateResultLarge(const QString&);

#endif // CALCULATE_H
