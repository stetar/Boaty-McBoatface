#include "Wind.h"


Wind::Wind()
{
	e = 1;
	w = 1;
	n = 1;
	s = 1;
	eptr = &e;
	wptr = &w;
	nptr = &n;
	sptr = &s;
}


Wind::~Wind()
{
}
