#include <iostream>
#include "h_01.h"

//Macros in C++

#define print(x) std::cout<< x <<std::endl; //----> This is macro

//! but we should not use macros in this way(It will have a real world example in OpenGl code)
int main()
{
	print(69); //---> It will just paste the code here 
    std::cin.get();
}