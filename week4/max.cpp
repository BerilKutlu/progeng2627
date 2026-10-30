#include <iostream>

int maxoftwo(double n, double m){
    double result;
    if(n > m){
        result = n;
    }else{
        result = m;
    }
    return result;
}
int main(){
    int num1, num2;
    std::cout << "enter two numbers:" << std:: endl;
    std::cin >> num1 >> num2;
    std::cout << "the greatest of the two is: " << maxoftwo(num1, num2) << std::endl;
}