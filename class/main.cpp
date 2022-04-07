#include "Students.h"

int main() {
	Students st1("Alex",15,10,'m',true);
	Students st2;

	cout << st1.getInfo() << endl;
	cout << st2.getInfo() << endl;


	return 0;
}