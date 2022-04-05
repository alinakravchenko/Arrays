#include<iostream>
using namespace std;
#define delimiter "\n--------------------------------\n"
#define tab "\t"


//#define ADDITION
void main()
{
	setlocale(LC_ALL, "");
	const int m = 3;//кол-во строк
	const int n = 3;//кол-во столбцов
	int A[m][n] = {};
	int B[m][n] = {};
	//заполнение матрицы случайными числами:
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 10;
			B[i][j] = rand() % 10;
		}
	}
	//выводим матрицу "А" на экран:
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimiter << endl;
	//выводим матрицу "В" на экран:
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << B[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimiter << endl;
	//умножение матриц:
	int C[m][n] = {};
	for (int i = 0; i < m; i++)
	{
		//i- выбирает строку матрицы А
		for (int j = 0; j < n; j++)
		{
			//j-выбирает столбец матрицы В
			for (int k = 0; k < n; k++) {
				//к-перебирает эл. выбр. строки матрицы "А" и столбца "В"
				C[i][j] += A[i][k] * B[k][j];
			}

}
	}
#ifdef ADDITION 
	//сложение матриц:
	int C[m][n] = {};//сумма предыдущих
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}
#endif

//вывод результат на экран:
for (int i = 0; i < m; i++)
{
	for(int j = 0; j < n; j++)
	{
	cout << C[i][j] << tab;
}
	cout << endl;
}

}