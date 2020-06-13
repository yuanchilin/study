#include <new>
#include <tchar.h>
// #include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
class NamedStr
{
	public :
	NamedStr ()
	{
		static const char s_szDefaultName[] = "Default name";

		static const char s_szDefaultStr[] = "Default string";

		m_pName = new char[strlen (s_szDefaultName) + 1];
		m_pData = new char[strlen (s_szDefaultStr) + 1];

		strcpy (m_pName, s_szDefaultName);
		strcpy (m_pData, s_szDefaultStr);
	}

	NamedStr (const char *pName, const char *pData)
	{
		m_pName = new char[strlen (pName) + 1];
		m_pData = new char[strlen (pData) + 1];
		strcpy (m_pName, pName);
		strcpy (m_pData, pData);
	}

	~NamedStr() 
	{
		delete[] m_pName;
		delete[] m_pData;
	}
	void Print ()
	{
		cout << "Name: " << m_pName << endl;
		cout << "String: " << m_pData << endl;
	}

	private :

	char *m_pName;
	char *m_pData;
};

int _tmain(int argc, _TCHAR * argv[])
{
	NamedStr *pDefNss = NULL;

	try
	{
		pDefNss = new NamedStr[10];
		NamedStr nlps("Kingsoft string", "This is for test.");

		nlps.Print ();
	}

	catch (...)
	{
		cout << "Exception!" << endl;
	}
	delete pDefNss;

	return 0;
}