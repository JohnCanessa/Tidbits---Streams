#pragma once

#include "pch.h"

using namespace std;

class Person
{

	// **** members ****
private:
	string	firstName;
	string	middleName;
	string	lastName;
	int		age;

public:
	// **** constructor ****
	Person(string firstName, string middleName, string lastName, int age);

	// **** destructor ****
	~Person();

	// **** to string ****
	string toString();

	// **** to string using sstream ****
	string tostring();
};

