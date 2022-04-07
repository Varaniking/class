#include"Header.h"
class Students {
private:
	string name;
	int age;
	double mark;
	bool alive;
	char sex;

public:
	Students();
	Students(string name, int age, double mark, char sex, bool alive);
	~Students();
	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);
	double getMark();
	void setMark(double mark);
	char getSex();
	void setSex(char sex);
	bool getAlive();
	void setAlive(bool alive);
	string getInfo();
};