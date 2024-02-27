#include <iostream>
int age_calc(int age);

int main()
{
	using namespace std;
	cout << "Enter your age: ";
	int age;
	cin >> age;
	int result;
	result = age_calc(age);
	cout << "Your age in months is " << result << "." << endl;
}
int age_calc(int age)
{
	int result = 12 * age;
	return result;
}