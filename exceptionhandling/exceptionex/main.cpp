#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>

using namespace std;

int main(){

	vector<string> names(5);

	names.at(0) = "Sandor";
	names.at(1) = "Janos";
	names.at(2) = "Gaspar";
	names.at(3) = "Denes";
	names.at(4) = "Boldizsar";

	for (string name : names){

		cout << name << endl;

	}

	try{

		names.at(5) = "Johnny";

	}
	catch(const out_of_range& err){

		cout << err.what() << endl;

	}

	return 0;
}
