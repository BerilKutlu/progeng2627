#include <iostream>

int main(){
    int year;
    std::cout << "please enter a year" << std::endl;
    std::cin >> year;
    if((year % 4) == 0){
        std::cout << "leap year" << std::endl;
    }
    else{
        std::cout << "not a leap year" << std::endl;
    }
}