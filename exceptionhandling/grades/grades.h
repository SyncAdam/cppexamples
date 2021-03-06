#ifndef GRADES_H
#define GRADES_H

#include <stdexcept>
 using namespace std;

 class gradeerr : public out_of_range{

 	public: gradeerr() : out_of_range("A szamnak nagyobbnak vagy egyenlőnek kell lennie 0val, kisebb egyenlőnek 100-al"){

 	}

 };

#endif
