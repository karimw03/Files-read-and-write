#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

class Employee {
public:
	int firstName, lastName, age;
};

int main() {
	Employee y;
	fstream x("employee.txt", ios::out);
	
	if (!x) {
		cerr << "File could not be opened" << endl;
		exit(1);
	}

	cout << "Enter first name, last name, and age: ";

	while (cin >> y.firstName >> y.lastName >> y.age) {
		x << y.firstName << ' ' << y.lastName << ' ' << y.age << endl;
		cout << "? ";
	}
	x.close();
	
	x.open("employee.txt", ios::in);

	while (!x.eof()) {
		int fname, lname, a;
		x >> fname >> lname >> a;

		cout << fname << "  " << lname << "  " << a << endl;
	}

	x.close();
}