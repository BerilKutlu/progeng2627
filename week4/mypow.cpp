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



int main(){
    std::cout << (mypow(2, 3) == 8) << std::endl;
    std::cout << (mypow(0.5, 2) == 0.25) << std::endl;
    std::cout << (mypow(6, 2) == 36) << std::endl;
    std::cout << (mypow(7, 3) == 343) << std::endl;
    // strıctly speakıng not correct because equalıty shouldn not be used wıth double
}