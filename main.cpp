#include <iostream>
#include "userInput.h"
#include "calculations.h"

int main(){

    // user input
    // user needs to input the numbers and calculations
    int num1 = userNumbers();
    int num2 = userNumbers();
    char calc = userOperator();
    
    // calculations
    // user input on numbers and calculation
    int result = calculator(num1, num2, calc);

    // output
    std::cout << "The result is: " << result << '\n';

    return 0;
}
