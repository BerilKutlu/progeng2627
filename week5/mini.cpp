#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    int min = vin[0];
    int index = 0;
    for(int i = 0; i < vin.size(); i++){
        if(vin[i] < min){
            min = vin[i];
            index = i;
        }
    }
    return index;
}
int main(){
    std::vector<double> v1{1, 28, 109, -20, 17};
    std::vector<double> v2{120, 53, 11, 23, 78};
    std::cout << min_vector_element(v1) << std::endl;
    std::cout << min_vector_element(v2) << std::endl;
}