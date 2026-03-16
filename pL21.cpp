#include<iostream>
#include "h_01.h"
#include<vector>

struct Vertex
{
	float x, y, z;
	Vertex(float x, float y, float z)
	{
		this->x=x;
		this->y=y;
		this->z=z;
	}
	void printp()
	{
		std::cout<<x<<", "<<y<<", "<<z<<std::endl;
	}
};


int main()
{
	Vertex v1(1,2,3);
	Vertex v2(4,5,6);
	
	std::vector<Vertex> vertices; //this is dynamic array ,pr iska naam stdvector kyu h ...vo kisi ko nhi pta
	//iska koi size nhi h , it allocates dynamiclly
	vertices.push_back(v1);
	vertices.push_back(v2); //push back means add to array
	
	for(int i = 0 ; i<vertices.size(); i++)
	{
		(vertices[i]).printp();
	}
	
	
	for(Vertex& v : vertices)   //new method think it like the below example  or like in python we have for i in [array]...
	{
		v.printp();
	}
	
	
	//These two are same (Good for understanding)
	
	int nums[3] = {1,2,3};
	for(int i : nums)
	{
		std::cout << i << std::endl;
	}
	//Another kaam ka example
	char name[5] = {'H', 'A', 'W', 'A', 'I'};
	for(char& i : name )
	{
		std::cout<<i;
	}
	
	vertices.clear(); //to delete array
	
	std::cin.get();
}