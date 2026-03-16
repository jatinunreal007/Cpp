#include<iostream>
#include "h_01.h"


class Entity
{
	private:
	    int  *x, *y;
	public:
		int GetValue() const //---->  can do this cause its not changing the value
		 {
		 	return (*x);
		 } 
		void SetValue()   //----> Cant do here bcoz hum value change kr rhe h
		{
			*x = 69;
			*y = 96;
			
		}
};


int main()
{
//	const int* A = new int; 
//  *A = 69;                    ---> mtlb ye harkate nhi , kyunki const int h (can only change reference , not value)
	
	int* const A = new int;     //[Heap memory me stored h , iske bare me agge baat krenge]
	*A = 69;    			    //(Ab ye harkat kr skte h kyunki const nhi h)
	
	int B= 96;
				         	    //	A = &B; ---> ye nhi chalega kyunki ab * ke baad const h to address change nhi kr skte 
	std::cout<< *A << std::endl;
	
	Entity e;
	e.SetValue();
	std::cout<< e.GetValue() <<std::endl;
	
	
	std::cin.get();
}

// Remember -------->
// agar * se phele const h to [Value] change nhi kr skte
// agar * ke baad const h to [Address] change nui kr skte 