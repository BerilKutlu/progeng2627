#include <iostream>
int maxofthree(double a, double b, double c){
    int result;
    if(a > b && a > c){
        result = c;
    }else if(b > a && b > c){
        result = b;
    }else if(c > a && c > b){
        result = c;
    }
    return result;
}
int main(){
    int x, y, z;
    std::cout << "enter three numbers: " << std::endl;
    std::cin >> x >> y >> z;
    std::cout << "the greatest of the three numbers is: " << maxofthree(x, y, z) << std::endl;
} 