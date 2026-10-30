#include <iostream>

bool leap_year(int year){
    bool ly;

    //check whether the year is a leap year or not
    //store result in variable ly

    //checks if it is a multiple of 4 and not a multiple of 100 or if its a multiple of 400
    if ((!(year % 4) && (year % 100)) || (!(year % 400)))
    {
        ly  = true;
    }
    else
    {
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

    // function leap_year is useful for this task

    // do not begin to write code straightaway
    // sketch some diagrams first like we did
    // for the leap year task

    // (this function should not print anything)


    //check and the number of days in the month
    //if februrary additionally check if its a leap year
    int numdays;
    y2 = y1;
    m2 = m1;

    if((m1 < 8  && m1 % 2) || (m1 > 7 && !(m1 % 2)))
    {
        numdays = 31;
    }
    else if(m1 == 2)
    {
        if(leap_year(y1))
        {
            numdays = 29;
        }
        else
        {
            numdays = 28;
        }
    }
    else
    {
        numdays = 30;
    }


    //add one to day

    d2 = d1 + 1;

    //if new day > number of days in the month reset day to one and add one to month
    if(d2 > numdays)
    {
        d2 = 1;
        //if december add 1 to year
        if (m1 == 12)
        {
            m2 = 1;
            y2 += 1;
        }
        else
        {
            m2 += 1;
        }
    }

    
    

    

}

int main(){
    
//tests

int d2, m2, y2;

next_date(1, 12, 2007, d2, m2, y2);
std::cout << (d2 == 2 && m2 == 12 && y2 == 2007) << std::endl;

next_date(31, 12, 2007, d2, m2, y2);
std::cout << (d2 == 1 && m2 == 1 && y2 == 2008) << std::endl;

next_date(29, 2, 2000, d2, m2, y2);
std::cout << (d2 == 1 && m2 == 3 && y2 == 2000) << std::endl;

next_date(28, 2, 2004, d2, m2, y2);
std::cout << (d2 == 29 && m2 == 2 && y2 == 2004) << std::endl;

next_date(29, 9, 2007, d2, m2, y2);
std::cout << (d2 == 30 && m2 == 9 && y2 == 2007) << std::endl;

next_date(31, 8, 2032, d2, m2, y2);
std::cout << (d2 == 1 && m2 == 9 && y2 == 2032) << std::endl;

}