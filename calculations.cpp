#include <iostream>

int calculator(int num1, int num2, char calc) {
    
    switch(calc){
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            return num1 / num2;

        default:
            std::cout << "Problem at calculator switch" << '\n';
            exit(2);
    }

}
