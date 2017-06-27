#include "std_lib_facilities.h"
#include <cmath>

int main1()
{
	double dc = 0;
	cin >> dc;
	double df = 9.0 / 5 * dc + 32;
	cout << df << endl;
	return 0;
}

int main2()
{
	constexpr double cm_per_inch = 2.54;
	double length = 1;
	char unit = 0;

	cout << "Please enter a length followed by a unit (c or i):\n";
	cin >> length >> unit;
	if (unit == 'i')
		cout << length << "in == " << cm_per_inch*length << "cm\n";
	else if (unit == 'c')
		cout << length << "cm == " << length / cm_per_inch << "in\n";
	else
		cout << "Sorry, I don't know a unit called " << unit << endl;

	return 0;
}

int main3()
{
	constexpr double cm_per_inch1 = 2.54;
	double length1 = 1;
	char unit1 = 'a';

	cout << "Please enter a length followed by a unit (c or i):\n";
	cin >> length1 >> unit1;
	switch (unit1) {
	case 'i':
		cout << length1 << "in == " << cm_per_inch1*length1 << "cm\n";
		break;
	case 'c':
		cout << length1 << "cm == " << length1 / cm_per_inch1 << "in\n";
		break;
	default:
		cout << "Sorry, I don't know a unit called " << unit1 << endl;
		break;
	}

	return 0;
}

int main4()
{
	cout << "Please enter a digit" << endl;
	char a;
	cin >> a;
	switch (a) {
	case '0': case '2': case '4': case '6': case '8':
		cout << "is even\n";
		break;
	case '1': case '3': case '5': case '7': case '9':
		cout << "is odd\n";
		break;
	}

	return 0;
}

int main5()
{
	int i = 0;
	while (i < 100) {
		cout << i << '\t' << sqrt(i) << endl;
		++i;
	}

	return 0;
}

int main6()
{
	for (int i = 0; i < 100; ++i)
		cout << i << '\t' << sqrt(i) << endl;

	return 0;
}


int square(int x)
{
	return x*x;
}
void write_sorry()
{
	cout << "Sorry Pal\n";
}
int main7()
{
	cout << square(2) << endl;
	cout << square(10) << endl;
	write_sorry();
	return 0;
}


void print_square(int v)
{
	cout << v << '\t' << v*v << endl;
}
int main8()
{
	for (int i = 0; i < 100; ++i) print_square(i);

	return 0;
}


int main9()
{
	vector<int> v = { 5,7,9,4,6,8 };
	vector<string> philosopher = { "Kant", "Plato", "Hume", "Kierkegaard" };
	vector<int> vi(6);
	vector<string> vs(4);

	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << endl;

	return 0;
}

int main10()
{
	vector<double> v;
	v.push_back(2.7);
	v.push_back(5.6);
	v.push_back(7.9);

	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << endl;

	return 0;
}

int main()
{
	vector<double> temps;
	for (double temp; cin >> temp;)
		temps.push_back(temp);

	double sum = 0;
	for (int x : temps) sum += x;
	cout << "Average tempature: " << sum / temps.size() << endl;

	sort(temps);
	cout << "Median tempature: " << temps[temps.size() / 2] << endl;

	return 0;
}