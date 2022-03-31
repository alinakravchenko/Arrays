#include<iostream>
using namespace std;
#define tab "\t"
//#define SEACH
void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n] = {};
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		bool already_there = false; //предполагаем, что выб.эл. ранее не встр..
		//но это нужно проверить: 
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				already_there = true; //этот эл. уже встр.ранее
				break;
			}
		}
		if (already_there)continue;
		int count = 0; //счетчик повторений 
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count > 0)printf("Значение %d встречается %d раз\n", arr[i], count);
		//if (count>0)cout << arr[i] << "повторяется " << count << "раз" << endl;
	}
#ifdef SEACH
		if(!already_there)
		{
		int count = 0; //счетчик повторений 
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if(count>0)cout << arr[i] << "повторяется " << count << "раз" << endl;
		}
	}
#endif	
}