#include <iostream>
#include <vector>

int main(){
    std::cout << "How long do you want your serie to be?" << std::endl;
    int n;
    std::cin >> n;
    std::vector<int> v;
    for(int i = 0; i < n; i++){
        std::cout << i + 1 << ".  :  ";
        int m;
        std::cin >> m;
        v.push_back(m);
    }
    std::cout << "Enter a number, the programme will print out all the values in the serie that is less than this number: "<<std::endl;
    int r;
    std::cin >> r;
    for(int i = 0; i < n; i++){
        if(v[i] < r){
            std::cout << i + 1 << ".  : " << v[i] << std::endl;
        }
    }
}