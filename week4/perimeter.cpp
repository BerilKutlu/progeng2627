#include <iostream>
void periarea(double n, double m, double& perimeter, double& area){
    perimeter = 2 * (n + m);
    area = n * m;
}

int main(){
    double a1, a2 , a3, p1, p2, p3;
    periarea(3, 6, p1, a1);
    periarea(10, 4, p2, a2);
    periarea(12, 5, p3, a3);
    std::cout << ((p1 == 18) && (a1 == 18)) << std::endl;
    std::cout << ((p2 == 28) && (a2 == 40)) << std::endl;
    std::cout << ((p3 == 34) && (a3 == 60)) << std::endl;
}