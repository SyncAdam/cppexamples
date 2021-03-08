#ifndef PERSON_H
#define PERSON_H

#include <string>

class person{

	public:

		person(std::string name);
		std::string getname() const;
		void setname(std::string name);

	private:

		std::string name;

};

#endif
