#include <iostream>

int main(){
    std::cout << "please enter number: " << std::endl;
    int temp1;
    int min;
    std::cin >> temp1;
    min = temp1;
    std::cout << "minimum so far: " << min << std::endl;
    while(temp1 != 0){
        std::cout << "please enter number: " << std::endl;
        std::cin >> temp1;
        if(temp1 < min){
            min = temp1;
        }
        std::cout << "minimum so far: " << min << std::endl;
    }
}