#ifndef KATZ_H
#define KATZ_H

#include <stdexcept>
#include <string>
using namespace std;

class angrycat : public runtime_error{

	public:
		angrycat() : runtime_error("Ettol merges lett a macska"){
		}
		angrycat(string message) : runtime_error(message){
		}

};

#endif
