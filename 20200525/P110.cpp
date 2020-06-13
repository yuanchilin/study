#include "iostream"
using namespace std;

class Cat
{
	public :
	Cat (int age) : itsAge(age)
	{
		HowMarryCats ++;
	}

	virtual ~Cat() 
	{
		HowMarryCats --; 
	}

	virtual int GetAge ()
	{
		return itsAge;
	}

	virtual void SetAge (int age)
	{
		itsAge = age;
	}

	// static int HowMarryCats;
	static int GetHowMany ()
	{
		return HowMarryCats;
	}

	private :
	int itsAge;
	static int HowMarryCats;
};

int Cat :: HowMarryCats = 0;

int main()
{
	const int MaxCats = 5; int i;
	Cat *CatHouse[MaxCats];
	for (i = 0; i < MaxCats; i ++)
	{
		CatHouse[i] = new Cat(i);
	}

	for (i = 0; i < MaxCats; i ++)
	{
		cout << "THere are ";
		cout << Cat :: GetHowMany();
		cout << " Cats left!\n";
		cout << "Deleting the one which is ";
		cout << CatHouse[i]->GetAge();
		cout << " years old\n";
		delete CatHouse[i];
		CatHouse[i] = 0;
	}
	return 0;
}