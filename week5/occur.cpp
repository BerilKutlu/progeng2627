#include <iostream>
#include <vector>

int main(){
    std::cout << "please enter n: " << std::endl;
    int n;
    std::cin >> n;
    std::vector<int> v;
    for(int i = 0; i < n; i++){
        std::cout << "please enter a number: " << std::endl;
        int a;
        std::cin >> a;
        v.push_back(a);
    }
    int s;
    std::cout << "please enter a number s: " << std::endl;
    std::cin >> s;
    int count = 0;
    std::vector<int> v2;
    for(int i = 0; i < n; i++){
        if(v[i] == s){
            count++;
            v2.push_back(i);
        }
    }
    std::cout << "There are " << count << " occurences of " << s << " at indices: " << std::endl;
    for(int i = 0; i < count; i++){
        std::cout << v2[i]<< std::endl;
    }
}