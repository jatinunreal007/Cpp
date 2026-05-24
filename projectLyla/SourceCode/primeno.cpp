// checking and printin prime numbers in a range

#include "h_01.h"

int main()
{

    int i = 2;
    int number = 0;
    int num;

    log("Enter the number upto prime numbers will be checked : ");

    std::cin >>num; 
    log("calculating------------------------------");

    while(i<num +1)
    {
        int pts =0;
        for(int j = 1; j<=i ; j++)
        {
            if (i%j == 0) { pts++; }
        }

        if(pts <= 2) { std::cout<<i<<std::endl; number++;}
        i++;
    }
    
    std::cout<<"there are total "<<number<<" prime numbers\n";

    std::cin.get();
}