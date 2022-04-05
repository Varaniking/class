#include "Students.h"


Students::Students() {
	name = "no name";
	age = 14;
	mark = 4;
	sex = 'm';
	alive = true;
}


Students::Students(string initName, int initAge, double initMark, char initSex, bool initAlive) {
	name = initName;
	age = initAge;
	mark = initMark;
	sex = initSex;
	alive = initAlive;
}

Students::~Students() {

}

string Students::getName() {
	return name;
}

void Students::setName(string n) {
	name = n;
}

int Students::getAge() {
	return age;
}

void Students::setAge(int a) {
	if (a >= 14 && a <= 70)
	{
		age = a;
	}
}

double Students::getMark() {
	return mark;
}

void Students::setMark(double m) {
	if (m >= 0 && m <= 10)
	{
		mark = m;
	}
}

char Students::getSex() {
	return sex;
}

void Students::setSex(char s) {
	if (s == 'm' || s == 'f') {
		sex = s;
	}
}

bool Students::getAlive() {
	return alive;
}

void Students::setAlive(bool al) {
	alive = al;
}
string Students::getInfo() {
	return name + ": age= " + to_string(age)
		+ "; mark =" + to_string(mark)
		+ ";is alive or not =" + (alive ? "true" : "false")
		+ ";sex = " + to_string(sex);
}