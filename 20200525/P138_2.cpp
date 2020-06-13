#include <iostream>
#include <string.h>

using namespace std;

class bird
{
public:
	void eat ()
	{
		cout << "I can eat?????\n";
	};
	void sleep ();
	void fly ();
};

class ostrich
{
public:
	bird eat ()
	{
		cout << "ostrich eat\n";
	}

	bird sleep ()
	{
		cout << "ostrich sleep";
	}
};

int main()
{
	ostrich xiaoq;
	xiaoq . eat ();
	xiaoq . sleep ();
	return 0;
}