#include "Fixed.hpp"

int main() {
	Fixed d(5);
    Fixed a(3);
    Fixed b(4);
    std::cout << "\n--- arithmethic Operator Tests ---\n";
    Fixed c = a * b / d; // same as a.operator+(b)
    Fixed f;
	Fixed const e( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "\n--- increment/decrement Operator Tests ---\n";
	std::cout << f << std::endl;
	std::cout << ++f << std::endl;
	std::cout << f << std::endl;
	std::cout << f++ << std::endl;
	std::cout << f << std::endl;
	std::cout << f-- << std::endl;
	std::cout << f << std::endl;
	std::cout << e << std::endl;
    std::cout << Fixed::min( e, f ) << std::endl;
	std::cout << Fixed::max( e, f ) << std::endl;
    std::cout << "result: " << c.toFloat() << '\n';

	// Comparison operator tests
	std::cout << "\n--- Comparison Operator Tests ---\n";
	
	Fixed x(10);
	Fixed y(5);
	Fixed z(10);
	
	std::cout << "x > y: " << (x > y) << std::endl;
	std::cout << "x < y: " << (x < y) << std::endl;
	std::cout << "y < x: " << (y < x) << std::endl;
	std::cout << "x >= z: " << (x >= z) << std::endl;
	std::cout << "y <= x: " << (y <= x) << std::endl;
	std::cout << "x == y: " << (x == y) << std::endl;
	std::cout << "x == z: " << (x == z) << std::endl;
	std::cout << "x != y: " << (x != y) << std::endl;
}