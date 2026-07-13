#include "Fixed.hpp"

Fixed::Fixed() {
	_result = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
	std::cout << "copy constructor called" << std::endl;
	_result = other._result;
}

Fixed&	Fixed::operator=(const Fixed& other) {
std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_result = other._result;
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) {
	std::cout << "getRawBits member function called" << std::endl;
	return (_result);
}

void	Fixed::setRawBits(int const raw) {
	this->_result = raw;
}