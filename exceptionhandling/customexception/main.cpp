#include <iostream>
#include "katz.h"

using namespace std;

void feedcat(int numjuti){

	if (numjuti<3){
		throw angrycat();

	}

	cout << "A macska örül ha " << numjuti << " jutit kap\n";

}

void feedcat(int numjuti, string message){

	if (numjuti>=3&&numjuti<=6){

		throw angrycat(message);
	}
	if (numjuti<3){
		throw angrycat();

	}

	cout << "A macska örül ha " << numjuti << " jutit kap\n";

}

int main(){

	int jutifalatok;
	cout << "Hany jutifalatot szeretnel adni a macskanak?\n";
	cin >> jutifalatok;
	try{

		feedcat(jutifalatok, "A macska nem elégedett");

	}
	catch(const angrycat& error){

		cout << error.what() << endl;

	}

	return 0;
}
