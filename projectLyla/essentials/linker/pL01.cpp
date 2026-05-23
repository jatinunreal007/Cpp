// #include<iostream>
// #include<string>
// #include "h_01.h"

// int main(){
// 	log("Testing");
	
// return 0;
// }

#include <iostream>
#include "h_01.h"

void log(const char* msg)
{
	std::cout<<msg<<std::endl;
}

int main()
{

	std::cout <<"hello again"<< std::endl;
	log("I am back");

	std::cin.get();
}
