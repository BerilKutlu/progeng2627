#include <iostream>

int main(){
    int x, n;
    int multi = 1;
    int i = 0;
    std::cin >> x >> n;
    while(i < n){
        multi = multi * x;
        i = i + 1;
    }
    std::cout << multi << std::endl;
}