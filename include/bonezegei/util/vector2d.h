/*
    Author: (Bonezegei) Jofel Batutay
    Date: February 5, 2024
    Purpose: Bonezegei Game Engine
*/

#ifndef __VEC2D_H_INCLUDED__
#define __VEC2D_H_INCLUDED__

template <class T>
class Vector2d{
public:
	Vector2d() : X(0), Y(0) {}
	Vector2d(T x, T y) : X(x), Y(y) {}
	Vector2d(T n) : X(n), Y(n) {}

    Vector2d<T> operator+(const Vector2d<T>& v) const { return Vector2d<T>(X + v.X, Y + v.Y); }
    Vector2d<T>& operator+=(const Vector2d<T>& v) { X+=v.X; Y+=v.Y; return *this; }

	T X;
	T Y;
};

typedef Vector2d<float> Vector2df;
typedef Vector2d<int>   Vector2di;
#endif

