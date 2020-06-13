#include <iostream>
using namespace std;

class Animal
{
	public:
	Animal () 
	{

	}

	void eat ()
	{
		cout << "eat\n";
	}
};

class Giraffe:private Animal
{
	public :
	Giraffe ()
	{

	}

	void StrechNeck (double)
	{
		cout << "strech neck \n";
	}
};

class Cat : public Animal
{
	public :
	Cat () {}

	void meaw ()
	{
		cout << "meaw\n";
	}
};

void Func (Animal & an)
{
	an.eat ();
}

int main ()
{
	Cat dao;
	Giraffe gir;
	// Animal ani;
	Func (dao);
	// Func (gir);	// 非法
	// Func (ani);
};