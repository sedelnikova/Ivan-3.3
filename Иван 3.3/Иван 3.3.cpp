// Иван 3.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float A, B, C, D;
	cout << "Введите три числа  ";
	cin >> A >> B >> C;
	D = A;
	A = B;
	B = C;
	C = D;

	cout << "A = " << A << endl;
	cout << "B = " << B << endl;
	cout << "C = " << C << endl;
	return 0;
}