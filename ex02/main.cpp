#include "Fixed.hpp"

// int main( void )
// {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;

// 	return 0;
// }

int main() {
	Fixed d(5);
    Fixed a(3);
    Fixed b(4);
    std::cout << "call: a.operator+(b)\n";
    Fixed c = a + b + d; // same as a.operator+(b)
    std::cout << "result: " << c.toInt() << '\n';
}