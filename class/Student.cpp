#include "Students.h"


Students::Students() {
	name = "no name";
	age = 14;
	mark = 4;
	sex = 'm';
	alive = true;
}


Students::Students(string name, int age, double mark, char sex, bool alive) {
	this->name = name;
	this->age = age;
	this->mark = mark;
	this->sex = sex;
	this->alive = alive;
}

Students::~Students() {

}

string Students::getName() {
	return name;
}

void Students::setName(string name) {
	this->name = name;
}

int Students::getAge() {
	return age;
}

void Students::setAge(int age) {
	if (age >= 14 && age <= 70)
	{
		this->age = age;
	}
}

double Students::getMark() {
	return mark;
}

void Students::setMark(double m) {
	if (mark >= 0 && mark <= 10)
	{
		this->mark = mark;
	}
}

char Students::getSex() {
	return sex;
}

void Students::setSex(char s) {
	if (sex == 'm' || sex == 'f') {
		this->sex = s;
	}
}

bool Students::getAlive() {
	return alive;
}

void Students::setAlive(bool alive) {
	this->alive = alive;
}
string Students::getInfo() {
	return name + ": age= " + to_string(age)
		+ "; mark =" + to_string(mark)
		+ ";is alive or not =" + (alive ? "true" : "false")
		+ ";sex = " + to_string(sex);
}