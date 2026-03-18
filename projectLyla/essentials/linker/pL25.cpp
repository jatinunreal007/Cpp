#include <iostream>
#include "h_01.h"
//Stack V/S Heap-->
struct Vec3
{
    float x, y, z;
};

int main()
{
	int num = 69;
    int *hnum = new int;
    *hnum = 96;

    int array[5] = {1,2,3,4,5};
    int *harray = new int[5];

	Vec3 v3;
    Vec3 *hv3 = new Vec3;

    log(&num);
    log(array);
    log("-------------");

	for(int i = 0; i<9; i++)
    {
		log(*(&num + i)); //------> here we would not get things like 69 00 00 00 (then garbage)
        //because while doing &num +1 its actually pointer arithimetic which add the bytes according to the pointer(int* in this case )
        // So we need to cast it to and char* to see the byte by byte value
    }

    log("----------------");

    for(int i =0; i<20; i++)
    {
    	char* byte = ((char*)(&num)); //---> casting into char*
    	std::cout<<(*((int*)(byte + i)))<<"--> byte "<<i<<std::endl;;// --> here we will get a clear picture of byte by byte
    }

    //If you see the address od the num anx array , they vary by 4 bytes , Thats actually what
    // stack allocation is , they are placed on top of each other like on stacks
    std::cin.get();

    // for heap , they are not found like stacks like close to each other , they lie randomly in ram and could be at any place
}