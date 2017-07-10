#include <iostream>
#include "std_lib_facilities.h";
 /*
int main()
{
	cout << "Please enter expression (we can handle + and -): ";
	int lval = 0;
	int rval;
	char op;
	int res;
	cin >> lval >> op >> rval;

	if (op == '+')
		res = lval + rval;
	else if (op == '-')
		res = lval - rval;

	cout << "Result: " << res << endl;
	return 0;
}
*/

int main()
{
	cout << "Please enter expression (we can handle +,-,*, and /)\n";
	cout << "add an x to end expression (eg 1+2*3x):";
	int lval = 0;
	int rval;
	cin >> lval;
	if (!cin) error("No first operand");
	for (char op; cin >> op;) {
		if (op != 'x') cin >> rval;
		if (!cin) error("no second operand");
			switch(op) {
			case '+':
				lval += rval;
				break;
			case '-':
				lval -= rval;
				break;
			case '*':
				lval *= rval;
				break;
			case '/':
				dval %= dval;
				lval /= rval;
				break;
			default:
				cout << "Result: " << lval << endl;

		}
	}


	return 0;
}