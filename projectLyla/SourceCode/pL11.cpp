#include<iostream>
#include "h_01.h"
#include <string>// Although iostream hs string decleration but , we cannot print it

int main()
{
	//string is just an array of chars
	//strings are immutable 
	
	const char* Name = "Maximus Desmus Meridous";
	
	char String[6] = {'J', 'A', 'T', 'I', 'N', 0}; //0 is written because std cout, doesnt know when to stop, 0 is the default way of null 
	
	std::cout<<Name<<std::endl;
	std::cout<<String<<std::endl;
	
	//String using std strings 
	std::string anotherOne ="King of Seven kingdoms..";
	std::cout<<anotherOne<<"\n";
	
	//String operations .....(only for std strings)
	
	bool isit = anotherOne.find("dom") != std::string::npos;//npos meaning if it has no position in string
	std::cout<<isit<<"\n";
	
	//std::string Dlords = "Heisenberg" + "Jessie pinkman";   (cant do this way , because we are adding two arrays ,)
	
	std::string Dlords = std::string("Heisenberg") + " Jessie pinkman"; //explictly declaring one string 
	std::cout<<Dlords<<std::endl;
	// Dlords += "Jessie pinkman " [or can do this way]
	
	std::cin.get();
}