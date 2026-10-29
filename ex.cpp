#include <iostream>

int main(){
    int n, rem;
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    if((n % 2) == 0){
        std::cout << "the number is even" << std::endl;
    }
    else{
        std::cout << "the number is odd" << std::endl;
    }
}