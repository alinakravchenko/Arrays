#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	/*объ€вление стат. массива
	                      type name{ SIZE };
	type - тип эмелентов массива, могут быть любого типа : bool, char, int, float /
		name - идентификаторы именовани€ переменных.
		SIZE - кол-во элементов массива.может быть целочисленным константным.

		const int SIZE = 5; (объ€вл€ем размер массива)
		int arr[SIZE]; (объ€вл€ем сам массив)*/
	const int n = 10;
	//кол-во элементов массива(размер)
	/*int arr[n];*/
	int arr[n] = {}; //объ€вление массива, инициализаци€
	/*arr[2] = 123;*/ //обращение ко второму элементу массива
	int minRand;
	int maxRand;
	cout << "¬ведите минимально возможное случайное число: "; cin >> minRand;
	cout << "¬ведите максимально возможное случайное число: "; cin >> maxRand;
	/*cout << "¬ведите элементы массива   (" << n << "шт.):";*/
	for (int i = 0; i < n; i++)
	{
		/*cin >> arr[i];*/
		 arr[i] = rand() %( maxRand -minRand)+ minRand;
	}
	//вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	double sum = 0;
//вывод сложени€ массивов:
	
	for (int i = 0; i <n; i++)
	{
		sum = sum + arr[i];
	}
	cout << "—умма элементов массива: " << (double)sum <<"\n";
	cout << endl;

	//среднее арифметическое массивов:
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	cout << "—реднее арифметическое в массиве: " << sum / n << "\n";
	cout << endl;

//минимальное и максимальное значение:
	int min; min = arr[0]; 
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	cout << "ћинимальное или максимальное значение в массиве: " << min<<" " << "\n";
	cout << endl;

}