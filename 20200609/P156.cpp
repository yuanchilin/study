#include <iostream>
#include <typeinfo>
using namespace std;

class base
{
public:
	virtual void funA()
	{
		// cout << "base" << endl;
		cout << "basedsfsdf" << endl;
	};

};

class derived : public base
{
public:
	virtual void funB()
	{
		cout << "derived" << endl;
	};
};

void funC(base *p)
{
	derived *dp = dynamic_cast<derived*>(p);
	if(dp != NULL)
	dp->funB();
	else
	{
		p->funA();
	}		
}

void funD(base *p)
{
	derived *dp = NULL;
	if(typeid(*p) == typeid(derived))
	{
		dp = static_cast<derived*>(p);
		dp->funB();
	}
	else
	{
		p->funA();
	}
	
}

int main()
{
	base *cp = new derived;
	cout << typeid(cp).name() << endl;
	cout << typeid(*cp).name() << endl;
	funD(cp);
	funC(cp);
	base *dp = new base;
	funC(dp);
	funD(dp);

	return 0;
}


