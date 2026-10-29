

#include<iostream>
double myabs(double n){

    double result;

    if(n < 0){
        result = -n;
    }else{
        result = n;
    }

    return result;
}
int main(){
    std::cout << (myabs(-0.5) == 0.5) << std::endl;
    std::cout << (myabs(0.5) == 0.5) << std::endl;
    std::cout << (myabs(-7) == 7) << std::endl;
    std::cout << (myabs(7) == 7) << std::endl;
    // strıctly speakıng not correct because equalıty shouldn not be used wıth double
}
