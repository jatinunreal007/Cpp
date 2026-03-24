#include <iostream>
#include <vector>

void Iterate(std::vector<int>& vec, void(*function)(int))
{
    for (int value : vec)
    {
        function(value);
    }
}

void print(int A)
{
    std::cout<<"Hello, World! :"<< A <<std::endl;
}
int main()
{
    auto Hello = print;
    Hello(69);
    typedef void(*HelloFunc)(int); //--> Defining  function pointer.
    HelloFunc HelloAgain = print;
    HelloAgain(96);
    // If we want to iterate each value of an array.
    std::vector<int> Nums = {1,2,3,4,5,6};
    Iterate(Nums, print);
    Iterate(Nums, [](int i){ std::cout<<(i+1)<<std::endl; });
    std::cin.get();
}