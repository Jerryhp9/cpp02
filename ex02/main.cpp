#include "Fixed.hpp"

int main() {
	Fixed d(5);
    Fixed a(3);
    Fixed b(4);
    std::cout << "call: a.operator+(b)\n";
    Fixed c = a * b * d; // same as a.operator+(b)
    Fixed f;
	Fixed const e( Fixed( 5.05f ) * Fixed( 2 ) );

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
    std::cout << "result: " << c.toInt() << '\n';
}