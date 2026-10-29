#include <iostream>

int main(){
    double x;
    int n;
    double result = 1;
    std::cin >> x >> n;
    for(int i = 0; i < n; i++){
        result = x * result;
    }
    std::cout << result << std::endl;
}