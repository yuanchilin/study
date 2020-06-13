#include <iostream>
using namespace std;
struct S
{
	int i;
	int *p;
};

main()
{
	S s;
	int *q = &s.i;
	q[0] = 1;
	q[1] = 5;
	cout << s.i << ' ' << endl;
	cout << s.p << endl;	
	cout << &s.i << endl;
	cout << &s.p << endl;
	cout << &s.p[0] << endl;
	cout << &s.p[1] << endl;
	cout << &s.p[2] << endl;
	// 
	s.p = q;
	cout << endl << s.i << endl;
	cout << s.p << endl;
	cout << *s.p << endl;
	cout << s.p[0] << endl;
	cout << s.p[1] << endl;
	// cout << s.p[0] << ' ' << &s.p << endl;



}