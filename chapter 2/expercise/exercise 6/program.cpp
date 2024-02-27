#include <iostream>
double astro_conv(double distance);

int main()
{
	using namespace std;
	cout << "Enter the number of light years: ";
	double distance;
	cin >> distance;
	double result;
	result = astro_conv(distance);
	cout << distance << " light years = " << result << " astronomical units." << endl;
	return 0;
}
double astro_conv(double distance)
{
	double result;
	result = 63240 * distance;
	return result;
}