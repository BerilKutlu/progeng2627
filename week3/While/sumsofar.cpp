/*
The sum so far¶

Write a program that keeps reading integers from the users (stopping when the user enters 0) and after each number read prints what's the sum of the numbers at that point. For example:


enter a number:
3
the sum so far is:
3
enter a number:
5
the sum so far is:
8
enter a number:
-1
the sum so far is:
7
enter a number: 2
the sum so far is:
9
enter a number: 0

*/

#include <iostream>

int main(){
    double n = 1;
    double sum = 0;
    int i = 0;
    double avg;
    while(n != 0){ // != means different or not equal
        std::cout << "enter a number:" << std::endl;
        std::cin >> n;
        i++;
        sum = sum + n;
        avg = sum/i;
        std::cout << "the avg so far is:" << avg << std::endl;
    }
}