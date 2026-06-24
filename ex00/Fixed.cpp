#include "Fixed.hpp"

Fixed::Fixed() {
	result = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
	result = other.result;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& other) {
std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->result = other.result;
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) {
	std::cout << "getRawBits member function called" << std::endl;
	return (result);
}

void	Fixed::setRawBits(int const raw) {
	this->result = raw;
}