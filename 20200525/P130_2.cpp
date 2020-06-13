#include <iostream>
using namespace std;

class Animal
{
	public :
	Animal ()
	{

	}

	void eat ()
	{
		cout << "eat\n";
	}
};

class Giraffe : protected Animal
{
	public :
	Giraffe ()
	{

	}

	void StrechNeck (double)
	{
		cout << "strech neck\n";
	}

	void take ()
	{
		eat ();
	}
};

int main()
{
	Giraffe gir;
	// gir.eat ();
	gir.take ();
	gir.StrechNeck(1.0);
}
