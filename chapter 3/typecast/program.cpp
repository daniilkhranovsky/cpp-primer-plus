// typecast.cpp -- �������������� ��������� �����
#include <iostream>
int main()
{
	using namespace std;
	int auks, bats, coots;

	// ��������� �������� ��������� �������� ���� double,
	// � ���������� ��������� ������������� � ��� int
	auks = 19.99 + 11.99;
	// ��� ��������� ��������� ������������� ��������
	bats = (int)19.99 + (int)11.99; // ������ ��������� �
	coots = int(19.99) + int(11.99); // ����� ��������� �++
	cout << "auks = " << auks << ", bats = " << bats;
	cout << ", coots = " << coots << endl;

	char ch = 'Z';
	cout << "The code for " << ch << " is "; // ����� � ������� char
	cout << int(ch) << endl; // ����� � ������� int
	cout << "Yes, the code is ";
	cout << static_cast<int>(ch) << endl; // ������������� static_cast
	return 0;


}