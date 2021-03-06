// -= Dynamic Memory Allocation -= //

#include <iostream>

using namespace std;

int main(){

	int* myintptr = new int(123);
	bool* myboolptr = new bool(true);

	cout << *myintptr << endl;
	cout << boolalpha << *myboolptr << endl;

	delete myintptr;
	delete myboolptr;

	myintptr = nullptr;
	myboolptr = nullptr;

	return 0;
}
