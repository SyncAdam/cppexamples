#ifndef WARP_H
#define WARP_H

#include <stdexcept>
using namespace std;



class warpdriveOH : public overflow_error{

	public: warpdriveOH() : overflow_error("WARP DRIVE IS OVERHEATING!!!"){

	};

};


#endif
