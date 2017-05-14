// Book-OverloadingUnaryOperator.cpp : Defines the entry point for the console application.
//

#include <iostream>

class Counter
{
private: 
	unsigned int count; // count
public:
	Counter() : count{ 0 } //constructor no arguments
	{}
	unsigned int getCount() // return count
	{
		return count;
	}
	void operator ++() //increment prefix
	{
		++count;
	}
};


int main()
{
	Counter c1, c2; // define and initialize 

	std::cout << "\nc1= " << c1.getCount(); // display count
	std::cout << "\nc2= " << c2.getCount(); 

	++c1; // increment c1
	++c2; // increment c2
	++c2; // increment c2

	std::cout << "\nc1= " << c1.getCount(); // display count
	std::cout << "\nc2= " << c2.getCount() << std::endl;

	system("pause");
    return 0;
}

