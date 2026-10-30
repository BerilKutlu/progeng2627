#include <iostream>
void division(int a, int b, int& div, int& rem){
    div = a / b;
    rem = a % b;
}

int main(){
    int div1, div2, div3, rem1, rem2, rem3;
    division(50, 3, div1, rem1);
    division(78, 9, div2, rem2);
    division(100, 7, div3, rem3);
    std::cout << ((div1 == 16) && (rem1 == 2)) << std::endl;
    std::cout << ((div2 == 8) && (rem2 == 6)) << std::endl;
    std::cout << ((div3 == 14) && (rem3 == 2)) << std::endl;
}