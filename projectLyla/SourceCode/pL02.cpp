#include<iostream>
#include "h_01.h"
#include <string>

void fn(int*);
/*

void print( std::string Name)
{
	std::cout<<Name<<std::endl;
}

*/
// pr hum ye harkat nhi krenge kyunki is method se string /variable copy hota h , hence downgrading performance
//iski vajaye ye aazaamaye..

void print(const char* Name) //const bcoz strings are immutable
{
	std::cout<< Name<< "\n";
}

//ek exaple or ...

void incriment(int* Value)
{
	//Value++; ---> ye nhi likh skte kyunki ye address h naki Value
	(*Value)++; //Ye chalega pr bracket lagana h kyunki preference ke according ++ phele hoga then dereference
	
}
int main(){
	log("Initialized");
	
	int a = 5;
	int* address = &a;
	std::cout<<address<<std::endl;
	
	fn(&a);
	
	print("Hey mf!..");
	int inc = 68;
	std::cout<< &inc <<std::endl;
	incriment(&inc);  // Address aka pointer pass kr diya...
	std::cout<< inc <<"\n";
	//Ye rhi summary ki hua kya
	//1.) Address uthaya
	//2.) Address ki value ko change kra 
	//3.) value print krdi 
}

void fn(int* var){
		int newvar=9;
		
		std::cout <<newvar<<std::endl;
		std::cout <<*var<<std::endl;
	}

//Attempt 2 ------>


