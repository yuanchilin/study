#include <iostream>
#include <memory.h>
#include <assert.h>

using namespace std;

class A
{
	char k[3];
public:
	virtual void aa ();
};

class B : public virtual A
{
	char j[3];
public:
	virtual void bb ();
};

class C : public virtual B
{
	char i[3];
public:
	virtual void cc ();
};

int main(int argc, char const *argv[])
{
	cout << "sizeof(A): " << sizeof (A) << endl;
	cout << "sizeof(B): " << sizeof (B) << endl;
	cout << "sizeof(C): " << sizeof (C) << endl; 
	return 0;
}