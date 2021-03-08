#include <iostream>
#include <stdexcept>
#include <string>
#include "person.h"

using namespace std;

int main(){

	try {
		person sanyi("Sanyi");
		person janos("Janos");
		person matyas("Matyas");

		cout << sanyi.getname() << endl;
		cout << janos.getname() << endl;
		cout << matyas.getname() << endl;
	}
	catch(const runtime_error& error){

		cout << error.what() << endl;

	}
	

	return 0;
}
