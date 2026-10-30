#include <iostream>

int main(){
    int n;
    std::cin >> n;
    for(int i = 1; i <= n; i++){
        for(int x = 1; x <= n; x++){
            std::cout << i * x << "\t";
        }
        std::cout << "\t" << std::endl;
    }
}