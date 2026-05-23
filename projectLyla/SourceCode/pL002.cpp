#include <iostream>
#include "h_01.h"

int main()
{
    // int , char, long, double, float
    int a = 2;
    char b = 'A';
    char B = 65; // same output bcoz characters are stored in numeric value 
    float c = 2.3;
    bool d = true;
    // an integer can store upto sround 2 billoin number
    //logic --->
    //integer = 4 bytes = 32 bits = 2^31 combinations but one bit is stored for sign(ie> negative or positive)
    unsigned int A = 69; //--- now there are 2^32 combinations
    log(sizeof(bool));
    log(B);

    std::cin.get();
}