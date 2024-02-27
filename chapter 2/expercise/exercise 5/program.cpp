#include <iostream>
double temp_conv(double value);

int main()
{	
	using namespace std;
	cout << "Please enter a Celsius value: ";
	double celsius;
	cin >> celsius;
	double fahrenheit;
	fahrenheit = temp_conv(celsius);
	cout << celsius << " degrees Celsius in " << fahrenheit << " Fahrenheit." << endl;
	return 0;
}
double temp_conv(double value)
{
	double result = 1.8 * value + 32;
	return result;
}