// HW Rekursiya.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>

using namespace std;
int i = 0;

//1.	Написать функцию, определяющую среднее арифметическое элементов передаваемого ей массива.
double f1(int* a, int n) {

	static double sum = 0;

	if (i < n) {
		sum += a[i];
		i++;
		return f1(a, n);
	}
	cout << "srednee arifmeticheskoe= " << sum / n << endl;
}

//2.	Написать шаблонную функцию, определяющую количество положительных, отрицательных и нулевых элементов передаваемого ей массива.
void f2(int* a, int n) {
	static int pol = 0;
	static int otric = 0;
	static int nul = 0;
	if (i < n)
	{
		if (a[i] > 0)
			pol++;
		else if (a[i] < 0)
			otric++;
		else if (a[i] == 0)
			nul++;
		i++;
		return f2(a, n);
	}
	cout << "polozhitelnix=" << pol << endl;
	cout << "otricatelnix=" << otric << endl;
	cout << "nulevix=" << nul << endl;
}

//3.	Написать шаблонную функцию, определяющую минимум и максимум (значение и номер) элементов передаваемого ей массива.
void f3(int* a, int n) {
	static int min = a[0];
	static int max = a[0];
	static int z = 0, w = 0;
	if (i < n) {
		if (a[i] < min) {
			min = a[i];
			z = i;
		}
		else if (a[i] > max) {
			max = a[i];
			w = i;
		}
		i++;
		return f3(a, n);
	}
	cout << "minimum: " << min << "[" << z << "]" << endl;
	cout << "maximum: " << max << "[" << w << "]" << endl;
}

int main()
{
	//3 zadanie
	/*int a[] = { 2,4,6,7,8 };
	f3(a, 5);*/

	//2 zadanie
	/*int a[] = { 2,0,-3,-7,5,1,0 };
	f2(a, 7);*/

	//1 zadanie
	/*int a[] = { 1,2,3,4,5 };
	f1(a, 5);*/

	system("pause");
	return 0;
}