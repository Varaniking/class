#include "Students.h"

class Group {
private:
	int size;
	string name;
	Students* list;
public:
	Group();
	Group(string name);
	Group(string name,Students* list,int size);
	~Group();

	void add(Students student);
	Students get(int index);
	int getSize();
	string getName(string name);
	void setName(string name);
	string getInfo();
};