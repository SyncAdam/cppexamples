#include <iostream>
#include <string>
#include "grades.h"

using namespace std;

char getlettergrade(int percent){

	if(percent>=0&&percent<=100){
		if(percent>=0&&percent<=59){

			return 'F';

		}
		if(percent>=60&&percent<=69){

			return 'D';

		}
		if(percent>=70&&percent<=79){

			return 'C';

		}
		if(percent>=80&&percent<=89){

			return 'B';

		}
		if(percent>=90&&percent<=100){

			return 'A';

		}

	}
	else{

		throw gradeerr();
		
	}
	return 0;
}

int main(){

	cout << "Usse be az elert szazalekot: \n";
	int myszaz;
	cin >> myszaz;
	try{

		cout << getlettergrade(myszaz) << endl;

	}
	catch(const gradeerr& error){

		cout << error.what() << endl;
 
	}

	return 0;
}
