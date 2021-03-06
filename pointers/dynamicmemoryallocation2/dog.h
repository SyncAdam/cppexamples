#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>

using namespace std;

class dog{

public:

	dog(string name, string breed);
	string getname();
	string getbreed();

private:

	string name;
	string breed;

};

#endif
