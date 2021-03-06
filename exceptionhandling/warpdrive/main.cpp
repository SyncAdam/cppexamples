#include  <iostream>
#include "warp.h"

using namespace std;


void warptest(int temperature){

	if(temperature<80){

		cout << "Warp drive is at " << temperature << " degrees.\n";

	}
	else{

		throw warpdriveOH();

	}

}


int main(){

	try{
		warptest(30);
		warptest(43);
		warptest(54);
		warptest(64);
		warptest(77);
		warptest(83);
	}
	catch(const warpdriveOH& error){

		cout << error.what() << endl;
 
	}

	return 0;
}
