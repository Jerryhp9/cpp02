#include "Point.hpp"
#include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed vector_x = b.getcoordinate('x') - a.getcoordinate('x');
	Fixed vector_y = b.getcoordinate('y') - a.getcoordinate('y');
	std::cout << "a - x: " << (a.getcoordinate('x').getRawBits() >> 8) << std::endl;
	std::cout << "a - y: " << (a.getcoordinate('y').getRawBits() >> 8) << std::endl;
	std::cout << "b - x: " << (b.getcoordinate('x').getRawBits() >> 8) << std::endl;
	std::cout << "b - y: " << (b.getcoordinate('y').getRawBits() >> 8) << std::endl;
	std::cout << "vector ab - x: " << (vector_x.getRawBits() >> 8) << std::endl;
	std::cout << "vector ab - y: " << (vector_y.getRawBits() >> 8) << std::endl;

	Fixed Pvector_x = point.getcoordinate('x') - a.getcoordinate('x');
	Fixed Pvector_y = point.getcoordinate('y') - a.getcoordinate('y');
	std::cout << "point - x: " << (point.getcoordinate('x').getRawBits() >> 8) << std::endl;
	std::cout << "point - y: " << (point.getcoordinate('y').getRawBits() >> 8) << std::endl;
	std::cout << "vector P - x: " << (Pvector_x.getRawBits() >> 8) << std::endl;
	std::cout << "vector P - y: " << (Pvector_y.getRawBits() >> 8) << std::endl;

	Fixed cross_a = (vector_x * Pvector_y) - (vector_y * Pvector_x);




	Fixed vector_x1 = c.getcoordinate('x') - b.getcoordinate('x');
	Fixed vector_y1 = c.getcoordinate('y') - b.getcoordinate('y');
	std::cout << "c - x: " << (c.getcoordinate('x').getRawBits() >> 8) << std::endl;
	std::cout << "c - y: " << (c.getcoordinate('y').getRawBits() >> 8) << std::endl;
	std::cout << "vector bc - x: " << (vector_x1.getRawBits() >> 8) << std::endl;
	std::cout << "vector bc - y: " << (vector_y1.getRawBits() >> 8) << std::endl;

	Fixed Pvector_x1 = point.getcoordinate('x') - b.getcoordinate('x');
	Fixed Pvector_y1 = point.getcoordinate('y') - b.getcoordinate('y');
	std::cout << "vector P1 - x: " << (Pvector_x1.getRawBits() >> 8) << std::endl;
	std::cout << "vector P1 - y: " << (Pvector_y1.getRawBits() >> 8) << std::endl;

	Fixed cross_b = (vector_x1 * Pvector_y1) - (vector_y1 * Pvector_x1);




	Fixed vector_x2 = a.getcoordinate('x') - c.getcoordinate('x');
	Fixed vector_y2 = a.getcoordinate('y') - c.getcoordinate('y');
	std::cout << "vector ca - x: " << (vector_x2.getRawBits() >> 8) << std::endl;
	std::cout << "vector ca - y: " << (vector_y2.getRawBits() >> 8) << std::endl;

	Fixed Pvector_x2 = point.getcoordinate('x') - c.getcoordinate('x');
	Fixed Pvector_y2 = point.getcoordinate('y') - c.getcoordinate('y');
	std::cout << "vector P2 - x: " << (Pvector_x2.getRawBits() >> 8) << std::endl;
	std::cout << "vector P2 - y: " << (Pvector_y2.getRawBits() >> 8) << std::endl;

	Fixed cross_c = (vector_x2 * Pvector_y2) - (vector_y2 * Pvector_x2);

	std::cout << "cross_a:" << cross_a.getRawBits() << std::endl << "cross_b:" << cross_b.getRawBits() << std::endl << "cross_c:" << cross_c.getRawBits() << std::endl;

	if (cross_a > 0 && cross_b > 0 && cross_c > 0)
		return (true);
	else if (cross_a < 0 && cross_b < 0 && cross_c < 0)
		return (true);
	else
		return (false);
}