#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	/*���������� ����. �������
	                      type name{ SIZE };
	type - ��� ��������� �������, ����� ���� ������ ���� : bool, char, int, float /
		name - �������������� ���������� ����������.
		SIZE - ���-�� ��������� �������.����� ���� ������������� �����������.

		const int SIZE = 5; (��������� ������ �������)
		int arr[SIZE]; (��������� ��� ������)*/
	const int n = 10;
	//���-�� ��������� �������(������)
	/*int arr[n];*/
	int arr[n] = {}; //���������� �������, �������������
	/*arr[2] = 123;*/ //��������� �� ������� �������� �������
	int minRand;
	int maxRand;
	cout << "������� ���������� ��������� ��������� �����: "; cin >> minRand;
	cout << "������� ����������� ��������� ��������� �����: "; cin >> maxRand;
	/*cout << "������� �������� �������   (" << n << "��.):";*/
	for (int i = 0; i < n; i++)
	{
		/*cin >> arr[i];*/
		 arr[i] = rand() %( maxRand -minRand)+ minRand;
	}
	//����� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	double sum = 0;
//����� �������� ��������:
	
	for (int i = 0; i <n; i++)
	{
		sum = sum + arr[i];
	}
	cout << "����� ��������� �������: " << (double)sum <<"\n";
	cout << endl;

	//������� �������������� ��������:
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	cout << "������� �������������� � �������: " << sum / n << "\n";
	cout << endl;

//����������� � ������������ ��������:
	int min; min = arr[0]; 
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	cout << "����������� ��� ������������ �������� � �������: " << min<<" " << "\n";
	cout << endl;

}