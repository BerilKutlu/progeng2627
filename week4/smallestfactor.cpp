#include <iostream>

int smallest_factor(int n){
    for(int cf = 2; cf < n; cf++){
        if((n % cf) == 0){
            return cf;
        }
    }
    return 0;
}

int main(){
    std::cout << (smallest_factor(91) == 7) << std::endl;
    std::cout << (smallest_factor(143) == 11) << std::endl;
    std::cout << (smallest_factor(63) == 3) << std::endl;
    std::cout << (smallest_factor(2) == 0) << std::endl;
    std::cout << (smallest_factor(17) == 0) << std::endl;
}