#include <iostream>
#include "h_01.h"

int multiply(int a, int b)
{

    log("multiply");
    return a*b;
}


int main()
{
    std::cout<<multiply(69,96)<<std::endl; // even if we remove of any use of this function, it will  still throw linking error
                                            // bcoz linker will think that we might use this function in any other file
    std::cin.get();
}

