#include <iostream>
#include <memory.h>
#include <assert.h>

using namespace std;

class A
{
public:
	void foo()
	{
		cout << "hello\n";
	}

};

class B
{
public:
	void foo ()

		cout << "what are you doing\n";
	}

};

class D : public A, public B
{

};

int main()
{
	D d;
	d.A::foo ();
	d.B :: foo ();
	return 0;
}