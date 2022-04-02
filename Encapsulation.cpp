
#include <iostream>

class Example 
{
private:
	int a;
public:
	Example() : a(1)
	{}

	Example(int newA) : a(newA)
	{}

	int GetA()
	{
		return a;
	}

	void SetA(int newA)
	{
		a = newA;
	}
};

int main() 
{
	Example temp(11);
	std::cout << temp.GetA();
}