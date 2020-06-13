#include <iostream>
#include <string>
#include <vector>
using namespace std;

class B
{
	private :
	int data;

	public :
	B ()
	{
		cout << "default constructor" << endl;
	}
	~B ()
	{
		cout << "destructed " << endl;
	}
	B (int i) : data(i)
	{
		cout << "constructed by parameter" << data << endl;
	}
};

B Play (B b)
{
	return b;
}

int main(int argc, char * argv[])
{
	B temp = Play(5);
	return 0;
}