/*
we want to perform the integer division of 10 by 3

10 is greater than 3 so we subtract 3 from 10 (first subtraction)
we get 7

7 is greater than 3 so we subtract 3 from 7 (second subtraction)
we get 4

4 is greater than 3 so we subtract 3 from 4 (third subtraction)
we get 1

1 is not greater than 3 so we terminate the loop

the quotient is the number of subtractions (3)
the remainder is the number we have left at the end (1)
*/


#include <iostream>

int main(){
    int n, m;
    int i = 0;
    int rem;
    std::cin >> n >> m;
    rem = n;
    while(rem >= m){
        rem = rem - m;
        i++;
        std::cout << rem + m << " is greater than " << m << " so we subtract " << m << " from " << rem + m << " we get " << rem << std::endl;
    }
    std::cout << rem << " is not greater than " << m << " so we terminate the loop " << std::endl;
    std::cout << " the quotient is the number of subtractions, which is: " << i << std::endl;
    std::cout << " the remainder is the number we have left at the end, which is: " << rem << std::endl;
}