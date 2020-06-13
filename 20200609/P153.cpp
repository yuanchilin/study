#include <iostream>
using namespace std;

class shape
{
public:
	shape(){};
	~shape(){};
	virtual void Draw(){};
};

int main(int argc, char const *argv[])
{
	shape s1;
	return 0;
}



