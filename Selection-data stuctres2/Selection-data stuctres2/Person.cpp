#include "Person.h"

Person::Person(const char* name, int id)
{
	strcpy(this->name, name);
	this->id = id;
}

int Person::getId() const
{
	return this->id;
}

void Person::setName(const char* name)
{
	strcpy(this->name, name);
}

void Person::setId(int id)
{
	this->id = id;
}
