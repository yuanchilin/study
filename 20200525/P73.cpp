#include <iostream>
using namespace std;

struct S
{
	int i;
	int * p;
};

main()
{
	S s;
	int * p = &s.i;
	p[0] = 4;
	p1[1] = 3;
	s.p = p;

	s.p[0] = 2;
	s.p[1] = 7;
}