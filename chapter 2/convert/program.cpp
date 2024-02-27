// convert.cpp -- преобразует стоуны в фунты
#include <iostream>
int stonetolb(int); // прототип функции
int main()
{
	using namespace std;
	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	int pound = stonetolb(stone);
	cout << stone << " stone = ";
	cout << pound << " pounds." << endl;
	return 0;
}
int stonetolb(int sts)
{	
	int pounds;
	pounds = 14 * sts; // вариат с разделением вычислений и возврата проще читать и модифицировать
	return pounds;
}