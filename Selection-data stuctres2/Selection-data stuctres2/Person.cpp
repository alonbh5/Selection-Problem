#include "Person.h"

Person::Person(const char* name, int id)
{
	strcpy(this->name, name);
	this->id = id;
}
