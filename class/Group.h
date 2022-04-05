#include "Students.h"

class Group {
public:
	Students* list;

	Group() {
		list = NULL;
	}

	void add(Students student) {
		if (list==NULL)
		{
			list = new Students[1];
			list[0] = student;
			count = 1;
		}
	}

};