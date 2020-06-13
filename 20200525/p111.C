#include <iostream>
#include <string>
using namespace std;

class base
{
	private :
	int m_j;
	int m_i;

	public :
	base () : m_j(0), m_i(m_j) {}

	base (int i) : m_i(m_j), m_j(i) {}

	int get_i () {return m_i;}
	int get_j () {return m_j;} 
};

int main(int argc, char* argv[])
{
	base obj (98);
	cout << obj.get_i () << endl
	<< obj.get_j () << endl;

	return 0;
}