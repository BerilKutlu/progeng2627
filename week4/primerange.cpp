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
    std::cout << "Put in two integers(these will be your range): " << std::endl;
    int a, b;
    std::cin >> a >> b;
    for(int n = a; n <= b; n++){
        if(smallest_factor(n) == 0){
            std::cout << n << std::endl;
        }
    }
}