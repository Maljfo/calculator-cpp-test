#include <iostream>
#include "userInput.h"

int userNumbers() {

    // asking numbers for calculation, will only call twice for now
    std::cout << "Please enter the the numbers you wish to calculate" << '\n';

    int num{};
    std::cin >> num;

    if(std::cin.fail()){
        std::cout << "Not an integer!" << '\n';
        exit(3);
    }

    return num;
}

char userOperator() {
    // asking the user so they input the correct symbol for calculations
    std::cout << "Please enter one of the following symbols based on what calculation you wish to do: " << '\n';
    std::cout   << "+ for addition." << '\n' 
                << "- for subtraction." << '\n'
                << "* for multiplication." << '\n'
                << "/ for division" << '\n';
    
    // storage for calculation char;
    char calc{};
    std::cin >> calc;
    
    // checking to make sure input is correct
    switch(calc) {
        case '+':
            break;
        case '-':
            break;
        case '*':
            break;
        case '/':
            break;

        default:
            std::cout << "Wrong input" << '\n';
            exit(1);
    }

    return calc;
}
