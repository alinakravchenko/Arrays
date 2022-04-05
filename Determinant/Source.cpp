#include<iostream>
using namespace std;
#define delimiter "\n--------------------------------\n"
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	
	const int  n = 3;
	int A[n][n] = {};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 10;
}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << tab;
		}
		cout << endl;
	}
	//создаЄм расширенную матрицу
	int B[n][n * 2] = {};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			B[i][j] = B[i][j + n] = A[i][j];
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n*2; j++)
		{
			cout << B[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimiter; //вычисл€ем определитель
	//вычилисл€ем главную диагональ
	int main_diag = 0;
	for (int i = 0; i < n; i++) {
		int product = 1; //произведение элементов главной диагонали
		for (int j = 0; j < n; j++)
		{
			product *= B[j][i+j];
		}
		main_diag += product;
	}
	cout << "√лавна€ диагональ: " << main_diag << endl;
	cout << delimiter; //вспомогательна€ диагональ
	int aux_diag = 0; //aux-вспомогательный 
	for (int i = 0; i < n; i++)
	{
		int product = 1;
		for (int j = 0; j < n; j++)
		{
			product *= B[n - 1 - j][i+j];
		}
		aux_diag += product;
	}
	cout << "¬спомогательна€ диагональ: " << aux_diag << endl;
	cout << "ќпределитель матрицы: " << main_diag - aux_diag << endl;
}