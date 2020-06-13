#include <iostream>
using namespace std;
class A
{
	public :
	void foo ()
	{
		cout << "A";
	}
	~A();

};

inline A :: ~A()
{
	cout << "\ninline";
}

int main()
{
	A *niu = new A();
	niu->foo();
	delete niu;
	
	return 0;
}