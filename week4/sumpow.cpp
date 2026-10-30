#include <iostream>
double mypow(double n, double m){
    int i = 0;
    double mult = 1;
    while(i < m){
        mult = mult * n;
        i++;
    }
    return mult;

}
int sumpow(int n, double x){
    double sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + mypow(x , i);
    }
    return sum;
}

int main(){
    std::cout << (sumpow(4, 2) == 30) << std::endl;
    std::cout << (sumpow(5, 3) == 363) << std::endl;
}