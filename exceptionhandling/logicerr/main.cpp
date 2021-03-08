#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

using namespace std;

//
//	Logic error exemple -=- length_error -=-
//

int main(){

	vector<int> mynums;

	try{

		mynums.resize(mynums.max_size() + 1);
	
	}
	catch(const length_error& err){

		cout << err.what() << endl ;
		cout  << mynums.max_size() << endl;

	}
	

	return 0;
}
