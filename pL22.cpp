#include<iostream>
#include<vector>

class Vector2
{
	float x,y;
	public:
		Vector2(float x, float y)
			:x(x), y(y)
		{
		} 
		Vector2(const Vector2& vec)
			:x(vec.x), y(vec.y)
		{
			std::cout<<"copied"<<std::endl;
		}
};

int main()
{
	std::vector<Vector2> vertices;
	vertices.reserve(3);          //we are reserving 3 blocks --> to prevent below , we already tell to reserve 3
	// vertices.push_back(Vector2(1,2));    --> sabse phele 1st copy hua
	// vertices.push_back(Vector2(3,4));    --> then 2nd to hua hi pr 1st bhi hua , kyunki resize krna h array ko
	// vertices.push_back(Vector2(5,6));    -->ab 3rd copy hua , pr 2nd bhi and 1st bhi 
	
	//so total 6 copies hui!
	
	
	vertices.emplace_back(1,2);   //Learn , phele ye jo vector2 construct hua h ye stack me huA h main function me 
	std::cout<< &vertices[0]<<std::endl;
	vertices.emplace_back(3,4);   // now ye us main fn se std::vector  ko jo memory allot h usme jayega
	std::cout<< &vertices[0]<<std::endl;
	vertices.emplace_back(5,6);   // to directly construct it in std vector , we use emplace_back
	std::cout<< &vertices[0]<<std::endl;
	vertices.emplace_back(7,8);
	std::cout<< &vertices[0]<<std::endl;   /* --> see how that 1st element changes its address bcoz,
	    									we have reserved memory enough for three elems , therefore when we push the 4th element , 
	    									it find another continuous block of memory , and copy its data to that , hence address of all changes*/ 
	    									
	 //instead of passing Vector2(par), we just pass parameters
	std::cin.get();
}