#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point {
	private:
		Fixed	const _x;
		Fixed	const _y;

	public:
		Point();
		Point(const float a, const float b);
		Point(const Point &other);
		Point& operator=(const Point& other);
		Fixed	getcoordinate(char type) const;
		~Point();

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif