#include "dog.h"
#include <iostream>
#include <string>

using namespace std;

	dog::dog(string name, string breed){

		this->name = name;
		this->breed = breed;

		cout << "Your dog has been constructed \n with the name " << name << "and breed " << breed << "\n";

	}
	string dog::getname(){

		return name;

	}
	string dog::getbreed(){

		return breed;

	}
