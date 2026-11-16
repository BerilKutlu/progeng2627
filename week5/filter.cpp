#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for(int i = 0; i < vin.size(); i++){
        if(vin[i] >= t){
            vout.push_back(vin[i]);
        }
    }
}

int main(){
    std::vector<double> vin{2,5,3,7,12,32};
    std::vector<double> vout;
    filter_v(vin, 9, vout);
    for(int i = 0; i < vout.size(); i++){
        std::cout << vout[i] << std::endl;
    }
}