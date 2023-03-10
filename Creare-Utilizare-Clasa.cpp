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
	Pers(){}
	unsigned show_vs() { return (*this).vs; }
    char* show_name() { return (*this).name; }
};

int main(/*array<System::String^>^ args*/)
//No need to use those paramaters for main

{
	unsigned a1{ 17 }; 
	Person p1;
	p1.vs = 20;
	strcpy_s(p1.name, 4, "Ion");
	strcpy_s(p1.surname, 10, "Doru");
	Console::WriteLine("We can output with CLR speific functions");
	std::cout << p1.name << "\t" << p1.surname << "\t" << p1.vs << "\n"<<"\n";
	Console::WriteLine("Using Pers class: ");
	Pers p2(20, "Ionescu", "Marius");
	Pers* p3 = new Pers(21, "Gheorghita", "Anca");
	std::cout << p2.show_name()<<"\t"<<p2.show_vs() << "\n";
	std::cout << (*p3).show_name() << "\t" << (*p3).show_vs()<<"\n";

	//In CLR we can take input with
	Console::ReadKey();
	//Here we use this to make the program hang until we give it an input
}
