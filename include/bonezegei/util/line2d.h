/*
    Author: (Bonezegei) Jofel Batutay
    Date: February 5, 2024
    Purpose: Bonezegei Engine
*/
#ifndef __LINE2D_H_INCLUDED__
#define __LINE2D_H_INCLUDED__

#include "vector2d.h"

template <class T>
class Line2d{
	public:

		Line2d() : p1(0,0), p2(1,1) {}
		Line2d(T xa, T ya, T xb, T yb) : p1(xa, ya), p2(xb, yb) {}

		Vector2d<T> p1;
		Vector2d<T> p2;
};


typedef Line2d<float> Line2df;
typedef Line2d<int>   Line2di;

#endif


