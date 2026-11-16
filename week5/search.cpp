#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    for(int i = 0; i < vin.size(); i++){
        if(vin[i] == n){
            return i;
        }
    }
    return -1;
}
int main(){
    std::vector<int> v1{12, 54, 17, 72, 46};
    std::vector<int> v2{98, 37, 10, 29, 73};
    std::cout << (search_vector(46, v1)) << std::endl;
    std::cout << (search_vector(37, v2)) << std::endl;
    std::cout << (search_vector(20, v1)) << std::endl;
}