#include <string>
#include <iostream>

class Jawline
{
 public:
   	std::string phrase()
    {
       return  ("I have No Limitations..");
  	} 
    
private:
	float Code;

};

int main()
{
    
    int a = 5;
    auto b = a; //--> auto keyword guess automatically the type of var assigned
    Jawline You;
    auto Line = You.phrase();

    std::cout << Line << std::endl;
    
    std::cin.get();
}
// Auto should be uaed where the variable type is too big to make it nice and readable