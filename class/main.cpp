#include "Students.h"

int main() {
	Students student1;
	Students student2("Alex");
	Students student3("Nikita",15,5,'m',true);

	cout << student1.getInfo() << endl;
	cout << student2.getInfo() << endl;
	cout << student3.getInfo() << endl;

	return 0;
}