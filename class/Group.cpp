#include "Group.h"
Group::Group() {
	name = "no group name";
	size = 0;
	list = NULL;
}
Group::Group(string name) {
	this->name = name;
	size = 0;
	list = NULL;
}
Group::Group(string name, Students* list, int size) {
	this->name = name;
	this->list = list;
	this->size = size;
}
Group::~Group() {
	if (list != NULL) {
		delete[] list;
	}

}

Students Group::get(int index) {
	if (list == NULL||index<0||index>=size)
	{
		return Students("", 0, 0,' ', false);
	}
	else {
		return list[index];
	}
}


Group::Group(){}
Group::Group(string name) {}
Group::Group(string name, Students* list, int size) {}
Group::~Group() {}

void Group::add(Students student){
	if (list==NULL)
	{
		list = new Students[1];
		list[0]=student;
		size = 1;
	}
	else {
		Students* temp = new Students[size + 1];
			for (int i = 0; i < size; i++)
			{
				temp[i] = list[i];
			}
			temp[size] = student;
			size++;
			delete[]list;
			list = temp;
	}
}

Students Group::get(int index){}

int Group::getSize(){
	return size;
}

string Group::getName(string name){
	return name;
}
void Group::setName(string name){}
string Group::getInfo(){
	if (list == NULL ||size==0)
	{
		return "Group " + name + " is empty";
	}
	
	string msg = "Students of group " + name+"\n";
	
	for (int i = 0; i < size; i++)
	{
		msg += list[i].getInfo() + "\n";
	}
	return msg;
}

