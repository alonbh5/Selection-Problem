#ifndef _PERSON_H
#define _PERSON_H

#include <iostream>
#include <string.h>
using namespace std;

#pragma warning (disable:4996)

const int MAX_SIZE = 20;

class Person
{
private:
	char name[MAX_SIZE];
	int id;

public:
	Person()=default;
	Person(const char* name,int id);
	Person(const Person& other);
	
	int getId() const;
	const char* getname() const;
	const Person& operator=(const Person& other);
	void setName(const char* name);
	void setId(int id);
	

};

#endif // !_PERSON_H

