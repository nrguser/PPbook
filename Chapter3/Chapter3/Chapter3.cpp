// Read and write a first name
#include "std_lib_facilities.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main1()
{
	cout << "Please enter your first name and age\n"; // asks the users for their name
	string first_name; // value to store name
	int age = -1; // value to store age
	cin >> first_name >> age; // allows input of their name.
	cout << "Please enter your age\n";
//	cin >> age;
	age = age * 12;
	cout << "Hello, " << first_name << ". " << "You're currently " << age << " months old!\n"; // outputs the users name in a sentence.

	return 0;
}

// Int for integers
// double for floating point numbers ex 3.5
// char for individual characters
// string for character strings (requires #include string)
// bool for logical variables (yes/no:1/0)

// Can ask for multiple inputs on a single line, cin >> string1 >> string2 >> etc

int main2()
{
	cout << "Please enter a floating point value: ";
	double n;
	cin >> n;
	cout << "n == " << n << "\nn + 1 == " << n + 1 << "\nthree times n == " << 3 * n << "\ntwice n == " << n + n << "\nn squared" << n*n << "\nhalf of n == " << n / 2 << "\nsquare root of n == " << sqrt(n) << "\n";

	return 0;
}

// This requires <cmath> include.


// Combines two string values to becoming one and then output.

int main3()
{
	cout << "Please enter your first and last name \n";
	string first, second;
	cin >> first >> second;
	string name = first + " " + second;
	cout << "Hello, " << name << "\n";
	cout << first << endl;
	cout << second << endl;
	return 0;
}

// Compares two names and determines if they are the same and also tells which one comes first alphabetically.

int main4()
{
	cout << "Please enter two names \n";
	string first, second;
	cin >> first >> second;
	if (first == second) cout << "That's the same name!\n";
	if (first < second)
		cout << first << " is aphabetically before" << second << endl;
	if (first > second)
		cout << first << " is alphabetically after " << second << endl;
	return 0;
}

// Determines if the previous word typed is the same.

int main5()
{
	string previous = "";
	string current;
	while (cin >> current) {
		if (previous == current)
			cout << "repeated word: " << current << endl;
		previous = current;
	}
	return 0;
}

int main6()
{
	int numberofwords = 0;
	string previous = "";
	string current;
	while (cin >> current) {
		++numberofwords;
		if (previous == current)
			cout << "word number " << numberofwords << " repeated: " << current << endl;
		previous = current;
	}
	return 0;
}
/*
int main7()
{
	double d = 0;
	while (cin >> d) {
		int i = d;
		char c = i;
		int i2 = c;
		cout << d << " " << i << " " << c << " " << endl;
	}
	return 0;
}
*/
// Drill

int main()
{
	cout << "Enter the name of the person you want to write to:" << endl; // asks the users for their name
	string first_name; // value to store name
	cin >> first_name;
	cout << "Enter the name of a friend:" << endl;
	string friend_name;
	cin >> friend_name;
	char friend_sex = 0;
	cout << "Enter the sex of your friend: ";
	cin >> friend_sex;
	int age;
	cout << "Enter the age of your friend: ";
	cin >> age;
	if (age == 0 || age >= 110)
		simple_error("you're kidding");

	cout << "Dear " << first_name << "," << endl;
	cout << "How are you? I am fine, I miss you." << endl;
	cout << "Have you seen " << friend_name << " lately?" << endl;
	if (friend_sex == 'm')
		cout << "If you see " << friend_name << " please have him call me." << endl;
	if (friend_sex == 'f')
		cout << "If you see " << friend_name << " please have her call me." << endl;

	cout << "I hear you just had a birthday and you are " << age << " years old." << endl;

	if (age <= 12)
		cout << "Next year you will be " << ++age << endl;
	if (age == 17)
		cout << "Next year you will be able to vote!" << endl;
	if (age >= 70)
		cout << "I hope you're enjoing retirement" << endl;
	cout << "Yours sinceerly," << endl;
	cout << "Matthew Buck" << endl;
	

	return 0;
}