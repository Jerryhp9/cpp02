#include "Point.hpp"

Point& Point::operator=(const Point& other) {
	if (this != &other)
		*this = other;
	return (*this);
}

Point::Point() : _x(0), _y(0) {}

Point::Point(const float a, const float b) : _x(a), _y(b) {}

Point::Point(const Point &other) : _x(other._x), _y(other._y) {}

Point::~Point() {}

Fixed	Point::getcoordinate(char type) const {
	if (type == 'x')
		return (_x);
	else
		return (_y);
}