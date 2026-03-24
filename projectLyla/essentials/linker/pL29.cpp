#include <iostream>

namespace Log{
void print(const char* str)
{
    std::cout << str << std::endl;
}

}
namespace greet{  //--> Just to make code readable if we have multiple same function names
void print(const char* str)
{
    std::cout << "Hello sir "<< str << std::endl;
}
void welcome(const char* name)
{
    std::cout << "Welcome "<< name <<std::endl;
}
} 
int main()
{
    greet::print("Thomas Shelby");
    Log::print("Lyla");
    //Or we can use like this 
    {
        using namespace Log;
        print("Dexter Morgan");
        
    }
    //or like this -->
    using greet::print; //--> This will only use print from greet
    print("John Snow");

    greet::welcome("Tyler Durden"); //--> But have to specify here 
    std::cin.get();
}