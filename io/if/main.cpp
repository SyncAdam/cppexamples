#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){

	ifstream inputf;
	inputf.open("input.txt");

	int sum = 0;
	int temp;
	vector<int> myvec;

	while(!inputf.eof()){

		inputf >> temp;
		myvec.push_back(temp);

	}

	inputf.close();

	for(int i = 0; i < myvec.size(); i++){

		sum+=myvec[i];

	}

	cout << sum << "\n";

	return 0;
}
