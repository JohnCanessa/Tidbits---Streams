#include "pch.h"
#include "Person.h"

using namespace std;

// **** constructor ****
Person::Person(string firstName, string middleName, string lastName, int age)
{
	this->firstName		= firstName;
	this->middleName	= middleName;
	this->lastName		= lastName;
	this->age			= age;
}

// **** destructor ****
Person::~Person()
{
}

// **** to string ****
string Person::toString()
{
	return firstName + " " + middleName + " " + lastName + " " + to_string(age);
}

// **** to string using a string stream ****
string Person::tostring()
{
	stringstream stm;
	stm << firstName << " " << middleName << " " << lastName << " " << age;
	return stm.str();
}

