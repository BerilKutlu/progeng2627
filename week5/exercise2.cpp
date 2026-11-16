#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;

    int n;
    std::cout << "how many elements would you like to input?" << std::endl;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        double m;
        std::cout << "enter your element" << std::endl;
        std::cin >> m;
        v.push_back(m);
    }
    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}