#include "calculator.h"
//Function to get a number from the user
double GetNumber(void)
{
    double num{};
    std::cout<<"Enter the number:\n";
    std::cin>>num;
    return num;
}
//To get the operator from the user
char GetOperator(void)
{
    char operator2{};
    std::cout<<"Enter the operator:\n";
    std::cin>>operator2;
    while(operator2!='+'&&operator2!='-'&&operator2!='*'&&operator2!='/')
    {
        std::cout<<"Invalid operator!\nPlease try Again!\n";
    }
    return operator2;
}
//To output the result
double GetResult(double number,char operator2,double number2)
{
    if(operator2=='+')
        return number+number2;
    else if(operator2=='-')
        return number-number2;
    else if(operator2=='*')
        return number*number2;
    else if(operator2=='/')
        return number/number2;
    else
        return 0;
}