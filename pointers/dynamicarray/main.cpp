#include <iostream>

using namespace std;

int main() {

	int mycin;
	cout << "Enter an array size\n";
	cin >> mycin;

	const int* ARR_SIZE = &mycin;
	int* myArray = new int[(*ARR_SIZE)];

	for(int i = 0; i<(*ARR_SIZE); i++){

		myArray[i] = i*2;

	}
	for(int i = 0; i<(*ARR_SIZE); i++){

		cout << myArray[i] << endl;

	}
	delete ARR_SIZE;
	delete[] myArray;

	return 0;
}
