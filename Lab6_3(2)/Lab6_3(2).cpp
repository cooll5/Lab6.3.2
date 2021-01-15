#include <iostream>
#include <iomanip>
#include <time.h>
#include "windows.h"

using namespace std;

template <typename T> 
void Create(T *A, int size, int i)
{
	cout << "Введіть " << i+1 << " елемент масиву: ";
	cin >> A[i];

	if(i<size-1)
		Create(A, size, i+1);
	else
		cout << endl;
}

template <typename T>
void Print(T *A, int size, int i)
{

	cout << setw(8) << A[i];

	if(i<size-1)
		Print(A, size, i+1);

	else	
		cout << endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int size;
	cout << "Розмір масиву: "; cin >> size;

	int* A = new int[size];
    int k=0;
	
	Create(A, size, 0);
	Print(A, size, 0);
	Print(A, size, 0);

	cout << endl;
	return 0;
}