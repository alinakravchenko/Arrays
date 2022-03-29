#include<iostream>
using namespace std;
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = {};
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;

	}
	for (int j = 1; j > n; j++)
	{
		if ( arr[i] == arr[i - j])
		{
			if((i-j)>=0){}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;

	}
	cout << endl;
}