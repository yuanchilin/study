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

		strcpy (m_pName, s_szDefaultName);
		strcpy (m_pData, s_szDefaultStr);
	}

	NamedStr (const char *pName, const char *pData)
	{
		m_pName = new char[strlen (pName)];
		m_pData = new char[strlen (pData)];
		strcpy (m_pName, pName);
		strcpy (m_pData, pData);
	}

	~NamedStr() {}
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
		NamedStr ns("Kingsoft string", "This is for test.");

		ns.Print ();
	}

	catch (...)
	{
		cout << "Exception!" << endl;
	}
	delete pDefNss;

	return 0;
}