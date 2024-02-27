#include <iostream>
double convert(double furlongs);

int main()
{
	using namespace std;
	cout << "Enter the distance in furlongs: ";
	double furlongs;
	cin >> furlongs;
	double result;
	result = convert(furlongs);
	cout << furlongs << " forlongs in yards: " << result << endl;
}
double convert(double furlongs)
{
	double result = 220 * furlongs;
	return result;
}