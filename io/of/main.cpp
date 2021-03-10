#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void printformatted(ofstream& c, int getin){


	for(int i = 1; i <= getin; i++){

		c << setw(12) << setprecision(2) << (i * 5.34552) <<

				 setw(12) << setprecision(3) << (i*3.14159) << endl;

		cout << setw(12) << setprecision(2) << (i * 5.34552) <<

			 	 setw(12) << setprecision(3) << (i*3.14159) << endl;
	}

}



int main(){

	int getin;

	ofstream outfile;

	cout << "Enter a number\n";

	cin >> getin;

	cout << "Writing to file..." << endl;

	outfile.open("output.txt");

	outfile << fixed << showpoint;
	cout << fixed << showpoint;

	printformatted(outfile, getin);

	outfile << "Hello World!" << endl;

	outfile.close();

	cout << "Done!" << endl;

	return 0;
}
