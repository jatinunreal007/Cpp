#include<iostream>

struct Vector
{
	int p_speed;
	std::string p_name;
	float x,y;
	
	Vector(float X, float Y) 
	: p_name("1st rule of Fight Club"), p_speed(69)
	{
		x = X;
		y = Y;
	}
	
	Vector Add(const Vector& other) // passing another vector a reference to prevent from copying
	{
		return Vector(x + other.x, y + other.y);
	}
	Vector operator+(const Vector& other) // Operator overloading
	{
		return Add(other); // or we can type same return as in Add
	}
	Vector Cross(const Vector& other)
	{
		return Vector(((x*(other.y)) - (y*(other.x))), 0);
	}
	Vector operator*(const Vector& other)
	{
		return Cross(other);
	}
	void vec_get() const
	{
		std::cout<<x<<std::endl;
		std::cout<<y<<std::endl;
		std::cout<<p_speed<<std::endl;
		std::cout<<p_name<<std::endl;
		std::cout<<"\n"<<std::endl;
	}
	
};

int main()
{
	Vector v1(3.0f, 2.0f);
	Vector v2(5.0f, 7.0f);
	
	Vector resultant1 = v1.Add(v2); // Aam jindgi..
	Vector resultant2 = v1 + v2 ;  // Mentos jindgi.....
	Vector resultant3 = v1*v2;    // Cross product ...
	resultant1.vec_get();
	resultant2.vec_get();
	resultant3.vec_get();
	
	std::cin.get();
}
// Use only when necessary and Valid 
// If another dev has to go to the class/struct to see the definition , then you failed