#include <iostream>
#include <string>
using namespace std;

void ResetTheTime(int *year, int *month, 
	int *date, int *hour, int *minute, 
	int *second)
{
	int dayOfMonth[12] = {31, 28, 31, 30, 31, 30, 
		31, 31, 30, 31, 30, 31};

	if( *year < 0 || *month < 1 ||
		*month > 12 ||
		*date < 1 || *date > 31 || *hour 
		< 0 || *hour > 23 ||
		*minute < 0 || *minute >59 || *second
		< 0 || *second > 60 )
		return;

	// if( *year < 0 || *month < 1 ||
	// 	*month > 12)
	// 	return;

	if( *year % 400 == 0 || *year % 100 != 
		0 && *year % 4 == 0)
		dayOfMonth[1] = 29;

	*second += 1;
	if( *second >= 60)
	{
		*second = 0;
		*minute += 1;
		if( *minute >= 60)
		{
			*minute = 0;
			*hour += 1;

			if( *hour >= 24)
			{
				*hour = 0;
				*date += 1;

				if( *date > dayOfMonth[ *month - 1])
				{
					*date = 1;
					*month += 1;

					if( *month > 12)
					{
						*month = 1;
						*year += 1;
					}
				}
			}
		}
	}

	cout << *year << ' ' << *month << ' ' 
	<< *date << ' ' << *hour << ' ' << 
	*minute << ' ' << *second;
	return;
}

int main()
{
	int y1 = 2100; int m1 = 2; int d1 = 28;
	int h1 = 23; int mm = 59; int se = 59;

	ResetTheTime(&y1, &m1, &d1, &h1, &mm, &se);
	return 0;
}