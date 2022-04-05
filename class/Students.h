#include"Header.h"
class Students {
public:
	string name;
	int age;
	double mark;
	bool alive;
	char sex;

	Students() {
		name = "no name";
		age = 6;
		mark = 4;
		sex = 'f';
		alive = true;
	}

	Students(string initName) {
		name = initName;
	}
	Students(string initName,int initAge,double initMark,char initSex,bool initAlive) {
		name = initName;
		age = initAge;
		mark = initMark;
		sex = initSex;
		alive = initAlive;
	}
	string getInfo() {
		return name + ": age= " + to_string(age)
			+ "; mark =" + to_string(mark)
			+ ";is alive or not =" + (alive ? "true" : "false")
			+ ";sex = " + to_string(sex);
	}
};