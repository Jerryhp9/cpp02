#include "Point.hpp"

Point& Point::operator=(const Point& other) {
	if (this != &other)
		*this = other;
	return (*this);
}

Point::Point() : x(0), y(0) {}

Point::Point(const float a, const float b) : x(a), y(b) {}

Point::Point(const Point &other) : x(other.x), y(other.y) {}

Point::~Point() {}

Fixed	Point::getcoordinate(char type) const {
	if (type == 'x')
		return (x);
	else
		return (y);
}