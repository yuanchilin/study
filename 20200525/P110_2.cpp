#include <iostream>
using namespace std;

class Cat
{
	public :
	Cat (int age) : itsAge (age)
	{
		HowManyCats ++;
	}

	virtual ~Cat ()
	{
		HowManyCats --;
	}

	virtual int GetAge ()
	{
		return itsAge;
	}

	virtual void SetAge (int age)
	{
		itsAge = age;
	}

	static int GetHowMany ()
	{
		return HowManyCats;
	}

	private :

	int itsAge;
	static int HowManyCats;
};

int Cat :: HowManyCats = 0;

void tele();

int main()
{
	const int MaxCats = 5; 
	int i;
	Cat *CatHouse[MaxCats];
	for (i = 0; i < MaxCats; i ++)
	{
		CatHouse[i] = new Cat(i);
		tele();
	}

	for (i = 0; i < MaxCats; i ++)
	{
		delete CatHouse[i];
		tele();
	}
	return 0;
}

void tele()
{
	cout << "There are " << Cat :: GetHowMany() << " Cats alive !\n";
}