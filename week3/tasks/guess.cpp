/* Write a program which "guesses" (better: finds out using an algorithm) what (integer) number the user is thinking, 
given a range (lower bound and higher bound) and, after each attempt, feedback from the user on whether the attempted
 value is less or greater than the actual number. */
 #include <iostream>
 #include <string>
 int main(){
    int low;
    int high;
    int lowtemp;
    int hightemp;
    std::string ans;
    std::string how;
    bool isit = false;
    std::cout << "what is your lower bound?" << std::endl;
    std::cin >> low;
    std::cout << "what is you higher bound?" << std::endl;
    std::cin >> high;
    lowtemp = low;
    hightemp = high;
    while(!isit){
        int mid = (lowtemp + hightemp) / 2;
        std::cout << "is your number:"  << (lowtemp + hightemp) / 2 << "(answer lower, higher or yes)" << std::endl;
        std::cin >> ans;
        if(ans == "lower"){
            hightemp = mid;
        } else if(ans == "higher"){
            lowtemp = mid;
        } else if(ans == "yes"){
            std::cout << "hurray! your number is: " << mid << std::endl;
            isit = true;
        }
    }
 }