#include <iostream>

using namespace std;

int main(){

	int myint = 150;
	double mydouble = 3.14;
	int* myintptr = &myint;
	double* mydoubleptr = &mydouble;

	cout << "myint equals " << myint << endl;
	cout << "myintptr holds the value: " << myintptr << endl;
	cout << "pointer dereferenced: " << *myintptr << endl;

	*myintptr = 200;

	cout << "myint is now: " << myint << endl;
	cout << "mydouble equals " << mydouble << endl;
	cout << "mydoubleptr holds value: " << mydoubleptr << endl;
	cout << "pointer dereferenced: " << *mydoubleptr << endl;

	return 0;
}
