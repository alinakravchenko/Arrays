#include<iostream>
using namespace std;
#define tab "\t"
//#define TASK1 //уникальные числа
//#define TASK2

void main()
{
	setlocale(LC_ALL, "");
const int n = 10;

#ifdef TASK1
	int arr[n] = {};
	for (int i = 0; i<n; i++)
	{
		arr[i] = rand() % n;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}


	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif
#ifdef TASK2
	
#endif

}