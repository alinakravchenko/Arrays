#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int decimal; //десятичное число, вводимое с клавиатуры 
	const int SIZE = 32; //макс. возмож. разрядность введенного числа
	bool bin[SIZE] = {}; //массив будет хранить разряды двоичного числа
	cout << "Введите десятичное число: "; cin >> decimal;
	int n=0; //фактическая разрядность числа
	for (int i = 0; decimal>0; i++)
	{
		bin[i] = decimal % 2;
		decimal /= 2;
		n++;
	}
	for (int i = n - 1; i >= 0; i--)
	{
		cout << bin[i];
	}
	
	

}