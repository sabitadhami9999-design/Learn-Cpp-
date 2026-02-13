#include<iostream>
class sample
{
	int x;
	public:
	sample(int a)
	{
		x=a;
	}
	friend void operator++(sample &);
	void display()
	{
		 std::cout << x<<std::endl;
	}
};

void operator++(sample &s)
{
	++s.x;
}

int main()
{
	int a; 

std::cout << "Enter an integer value: ";
std::cin >> a; 

	sample s(a); 

	s.display();
	++s;
	s.display();

	return 0;
}
