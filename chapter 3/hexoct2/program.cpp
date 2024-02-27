// hexoct2.cpp -- отображает значения в шестнадцатеричном и восьмеричном форматах
#include <iostream>
using namespace std;

int main()
{
	using namespace std;
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "Monsieur cuts a striking figure!" << endl;
	cout << "chest = " << chest << " (decimal for 42)" << endl;
	cout << hex; // манипулятор для изменения основания системы счисления
	cout << "waist = " << waist << " (hexademical for 42)" << endl;
	cout << oct;
	cout << "inseam = " << inseam << " (octal for 42)" << endl;
	return 0;
}