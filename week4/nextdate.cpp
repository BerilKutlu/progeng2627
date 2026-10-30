#include <iostream>

bool leap_year(int year){
    bool ly;

    if(year % 4 == 0){
        ly = true;
    }else{
        ly = false;
    }

    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    // TODO: d1, m1, y1 are inputs 
    // corresponding to the date d1/m1/y1
    // d2, m2, y2 are outputs that the function must compute
    // corresponding to the date d2/m2/y2 
    // which is meant to be the day after d1/m1/y1
    if(leap_year(y1) && (m1 == 2)){
        if(d1 == 28){
            d2 = 29;
            m2 = m1;
            y2 = y1;
        }else if(d1 == 29){
            d2 = 1;
            m2 = 3;
            y2 = y1;
        }
    }else if((m1 == 1) || (m1 == 3) || (m1 == 5) || (m1 == 7) || (m1 == 8) || (m1 == 10) || (m1 == 12)){
        if(d1 == 30){
            d2 = 31;
            m2 = m1;
            y2 = y1;
        }else if (d1 == 31){
            d2 = 1;
            m2 = m1 + 1;
            y2 = y1;
            if(m1 == 12){
            m2 = 1;
            y2 = y1 + 1;
            d2 = 1;
            }
        }else{
            d2 = d1 + 1;
            m2 = m1 + 1;
            y2 = y1;
        }
    }else if((m1 == 2) || (m1 == 4) || (m1 == 6) || (m1 ==  9) || (m1 == 11)){
        if(d1 == 30){
            d2 = 1;
            m2 = m1 + 1;
            y2 = y1;
        }else{
            d2 = d1 + 1;
            m2 = m1;
            y2 = y1;
        }
    }

    // function leap_year is useful for this task

    // do not begin to write code straightaway
    // sketch some diagrams first like we did
    // for the leap year task

    // (this function should not print anything)

}

int main(){
    int da1, da2, da3, mo1, mo2, mo3, ye1, ye2, ye3;
    next_date(31, 3, 2004, da1, mo1, ye1);
    next_date(29, 2, 1996, da2, mo2, ye2);
    next_date(31, 12, 2026, da3, mo3, ye3);
    std::cout << ((da1==1) && ( mo1 == 4) && (ye1 == 2004)) << std::endl;
    std::cout << ((da2==1 ) && (mo2 == 3) && (ye2 == 1996) ) << std::endl;
    std::cout << ((da3 == 1) && (mo3 == 1) && (ye3 == 2027)) << std::endl;
}