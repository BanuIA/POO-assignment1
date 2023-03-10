#include "pch.h"
#include <iostream>

using namespace System;

struct Person {
	unsigned vs;
	char name[20];
	char surname[20];
};

class Pers {
	unsigned vs;
	char name[20];
	char surname[20];
public:
	Pers(unsigned vs1, char* num1, char* surnm) {
		vs = vs1;
		strcpy_s(name, 20, num1);
		strcpy_s(surname, 20, surnm);
	}
	Pers() {}
	unsigned show_vs() { return (*this).vs; }
	char* show_name() { return (*this).name; }
};

int main(/*array<System::String^>^ args*/)
//No need to use those paramaters for main

{
	unsigned npeople, vs;
	char name[20];
	Console::WriteLine("{0}{1}", "Input the number of people", '\n');
	std::cin >> npeople;

	Person* people = new Person[npeople];

	for (int i = 1; i <= npeople; i++) {
		Console::WriteLine("{0}{1}", "Input the age of person number: " + i, "\n");
		std::cin >> vs;
		people[i].vs = vs;

		Console::WriteLine("{0}{1}", "Input the age of person number: " + i, "\n");
		std::cin >> name;
		strcpy_s(people[i].name, 20, name);
	}
	Console::WriteLine("{0}{1}", "The name and ages of the people: ", "\n");

	for (int i = 1; i <= npeople; i++) {
		std::cout << "The name and age of person number " << i << "\t" << people[i].name << "\t" << people[i].vs << "\n";
	}
}
