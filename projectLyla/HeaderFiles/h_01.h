#include<iostream>
#include<string>

// Templates are the code which is written by compiler under set of our instruction on runtime 

template<typename type> //--> Here is declaration
//We could also use multiple variables like below
// template<typname T , int N>
void log(type T)
{
    std::cout<<T<<std::endl;
}

