#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
void PrintfArrary(char *p_str, 
	char *s_str, int *print_arr, int p_len,
	int s_len, int print_arr_num,
	int p_start_num, int s_start_num)
{
	int pStartnum = p_start_num,
	sStartNum = s_start_num;
	int printNum = print_arr_num;
	if(printNum == s_len)
	{
		for (int i = 0; i < s_len; i ++)
		{
			cout << *(print_arr + i);
			cout << " ";
		}
		cout << endl;
		return;
	}

	for (int i = pStartnum; i < p_len; i ++)
	{
		for (int j = sStartNum; j < s_len; j ++)
		{
			if (*(p_str + i) == *(s_str + j))
			{
				print_arr[printNum] = i + 1;
				pStartnum = i;
				sStartNum = j;
				PrintfArrary(p_str, s_str,
					print_arr, p_len, s_len,
					printNum + 1, pStartnum + 1,
					sStartNum + 1);
			}
		}
	}
}

void ConnectSequence(char *p_str,
	char *s_str)
	{
		int p_len = strlen(p_str);
		int s_len = strlen(s_str);
		int *print_arr = new int[s_len];
		unsigned int print_arr_num = 0;

		if (NULL == p_str && NULL == s_str)
		{
			cout << "string erro" << endl;
			return;
		}

		if (NULL == print_arr)
		{
			cout << "allocate error" << endl;
			return;
		}
		PrintfArrary(p_str, s_str, print_arr,
			p_len, s_len, 0, 0, 0);
	}

	int main()
	{
		char ParString[] = "abdbcca";
		char SonString[] = "abc";
		ConnectSequence(ParString, SonString);
		return 0;
	}