#include <iostream>
#include <vector>

int main(){
    std::vector<int> v; 

    v.push_back(10);
    v.push_back(20);

    std::cout << v[0] << std::endl;
    // this will print 10

    std::cout << v[1] << std::endl;
    // this will print 20

    v[0] = 15;

    std::cout << v[0] << std::endl;
    // this will print 15

    // however we can't use indexing
    // to access or store values in cells that don't exist
    // for example in this case writing:

    // v[2] = 30;

    // or

    // std::cout << v[4] << std::endl;

    // would be a mistake
    // because there are no cells for indices 2 or 4 
    // (confusingly enough the program may or may not crash)
}