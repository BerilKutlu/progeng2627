/**please enter number:
3
maximum so far: 3
please enter number: 
6
maximum so far: 6
please enter number:
4
maximum so far: 6
please enter number:
7
maximum so far: 7
please enter number:
0
maximum so far:
7 */

#include <iostream>

int main(){
    std::cout << "please enter number: " << std::endl;
    int temp1;
    int max;
    std::cin >> temp1;
    max = temp1;
    std::cout << "maximum so far: " << max << std::endl;
    while(temp1 != 0){
        std::cout << "please enter number: " << std::endl;
        std::cin >> temp1;
        if(temp1 > max){
            max = temp1;
        }
        std::cout << "maximum so far: " << max << std::endl;
    }
}