#include"Header.h"
class Students {
private:
	string name;
	int age;
	double mark;
	bool alive;
	char sex;

public:
	Students() {
		name = "no name";
		age = 14;
		mark = 4;
		sex = 'm';
		alive = true;
	}


	Students(string initName, int initAge, double initMark, char initSex, bool initAlive) {
		name = initName;
		age = initAge;
		mark = initMark;
		sex = initSex;
		alive = initAlive;
	}

	~Students() {

	}

	string getName();

	void setName(string n);

	int getAge();

	void setAge(int a);

	double getMark();

	void setMark(double m);

	char getSex();

	void setSex(char s);

	bool getAlive();

	void setAlive(bool al);

	string getInfo();
};