#include "Wind.h"


Wind::Wind()
{
	RandomFunctions rf;
	e = rf.randomNumber(1,4);
	w = rf.randomNumber(1,4);
	n = rf.randomNumber(1,4);
	s = rf.randomNumber(1,4);
	eptr = &e;
	wptr = &w;
	nptr = &n;
	sptr = &s;
}


Wind::~Wind()
{
}
