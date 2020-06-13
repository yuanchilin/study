#include <iostream>
#include <stdio.h>

class Parent
{
	public :
	Parent (int var = - 1)
	{
		m_nPub = var;
		m_nPtd = var;
		m_nPrt = var;
	}

	public :
	int m_nPub;

protected:
	int m_nPtd;

private:
	int m_nPrt;
};

class Child1 : public Parent
{
public:
	int GetPub ()
	{
		return m_nPub;
	}

	int GetPtd ()
	{
		return m_nPtd;
	}

	// int GetPrt ()
	// {
	// 	return m_nPrt;
	// }
};

class Child2 : protected Parent
{
public:
	int GetPub ()
	{
		return m_nPub;
	}

	int GetPtd ()
	{
		return m_nPtd;
	}

	// int GetPrt ()
	// {
	// 	return m_nPrt;
	// }
};

class Child3 : private Parent
{
public:
	int GetPub ()
	{
		return m_nPub;
	}

	int GetPtd ()
	{
		return m_nPtd;
	}

	// int GetPrt ()
	// {
	// 	return m_nPrt;
	// }
};

int main()
{
	Child1 cd1;
	Child2 cd2;
	Child3 cd3;

	int nVar = 0;

	cd1.m_nPub = nVar;

	// cd2.m_nPtd = nVar;

	nVar = cd1.GetPtd ();

	// cd2.m_nPub = nVar;

	nVar = cd2.GetPtd ();

	// cd3.m_nPub = nVar;

	nVar = cd3.GetPtd ();

	return 0;
}