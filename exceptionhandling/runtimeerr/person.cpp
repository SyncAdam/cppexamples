#include "person.h"
#include <stdexcept>
using namespace std;

		person::person(std::string name){

			setname(name);

		}
		std::string person::getname() const{

			return name;

		}
		void person::setname(std::string name){

			if(name != "Janos"){

			this->name = name;

			}
			else{

				throw runtime_error("Janos? Te vagy az?");

			}

		}
