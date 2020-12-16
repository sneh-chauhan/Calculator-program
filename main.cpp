#include "calculator.h"
//Calling all of the functions from main
int main(void)
{
    //To get a number from user
    double number{GetNumber()};
    //To get a operator from user
    char operator3{GetOperator()};
    //To get the another number
    double number2{GetNumber()};
    //To get the result
    double result{GetResult(number,operator3,number2)};
    std::cout<<"The evaluation turns out to be:"<<result<<'\n';
    return 0;
}