#include <iostream>

using namespace std;

void noConst();
void cp2ncd();
void ncp2cd();
void cp2cd();
void noChange(const double* const mydubptr);

int main(){

	noConst();
	cout << endl;

	cp2ncd();
	cout << endl;

	ncp2cd();
	cout << endl;

	cp2cd();
	cout << endl;

	double* mydubzzz = new double(3.14);

	noChange(mydubzzz);

	delete mydubzzz;

	return 0;
}

//egyik pointer sem konstans (mindkettő változtatható)

void noConst(){

	cout << "In noConst " << endl;

	int* intptr = new int (50);

	cout << "\teredeti ertek" << *intptr << endl;

	*intptr = 100;

	cout << "\tchange data: " << *intptr << endl;

	delete intptr;

	intptr = new int(125);
	cout << "\tnew integer entirely: " << *intptr << endl;

	delete intptr;

}

//a pointer konstans(nem változtatató)

void cp2ncd(){

	cout << "In cp2ncd" << endl;

	int* const intptr = new int(100);
	cout << "\teredeti ertek" << *intptr << endl;

	*intptr = 250;

	cout << "\tnew int value" << *intptr << endl;

	delete intptr;

	//intptr = new int (222); 		// nem lehetséges, a pointer konstans
}

//nem konstans pointer, konstans adat

void ncp2cd(){

	cout << "In ncp2cd" << endl;

	const int* intptr = new int (500);

	cout << "\teredeti ertek" << *intptr << endl;

	delete intptr;
	
	intptr = new int(1000); 		// lehetséges, mert ilyenkor uj pointer jön létre

	//*intptr = 3000; 				// nem lehetséges, mert az adat konstans

	delete intptr;

}

//a pointer konstans és az adat is konstans

void cp2cd(){

	cout << "In cp2cd" << endl;

	const int* const intptr = new int (350);

	cout << "\teredeti ertek" << *intptr << endl;

	//*intptr = 2222; 				//nem lehetséges, mert az adat konstans

	//intptr = new int(4444);		//nem lehetséges mert a pointer is konstans

	delete intptr;
}

void noChange(const double* const mydubptr){

	cout << "In noChange()" << endl;
	cout << "\teredeti ertek" << *mydubptr << endl;
}
