#include "pch.h"

using namespace System;



int main(array<System::String^>^ args) {
	unsigned c = 0; int div1 = 0;
	try {
		for(c; c<5; c++){
			Console::WriteLine("Afisare [0][1]", "var", c);
		}
		double div = c / div1;
		Console::WriteLine(div);
	}
	catch (Exception^ exception) {
		Console::WriteLine("A fost gasita o exceptie" + (*exception).Message);
	}
}
