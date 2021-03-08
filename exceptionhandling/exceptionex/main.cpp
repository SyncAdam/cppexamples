#include <iostream>
#include <stdexcept>

using namespace std;


//
//	-=Rethrowing example=-
//


void processpositive(int num){

	cout << "Positive int processor initialized \n";
	if(num>100){
		cout << "The num is too large\n";
		throw out_of_range("The number passed in is too large\n");
	}
	else if(num>=0){

		cout << "The number passed in is positive\n"; 

	}
	else{

		throw invalid_argument("The number passed in is negative\n");

	}
	

}
void dosomething(int num){

	try{

		processpositive(num);
		cout << "dosomething can process the number\n";

	}
	catch (invalid_argument& error){

		cout << "dosomething couldnt process the number\n";
		throw; //rethrow

	}
	catch (out_of_range& error){

		cout << "dosomething couldnt process the number, its out of range\n";
		throw;

	}

}


int main(){


	int input;
	try{

		cout << "Enter a number\n";
		cin >> input;
		dosomething(input);
		cout << "int main() function completed\n";

	}
	catch(invalid_argument& error){

		cout << "\tError in int main() function\n";
		cout << error.what() << endl;

	}
	catch(out_of_range& error){

		cout << error.what() << endl;

	}

	return 0;
}
