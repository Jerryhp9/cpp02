#include "Fixed.hpp"

Fixed::Fixed() {
	result = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num) {
	result = num << frac_bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num) {
	result = roundf(num * (1 << frac_bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
	result = other.result;
	std::cout << "Copy constructor called" << std::endl;
}

float Fixed::toFloat(void) const {
	return (float(result) / (1 << frac_bits));
}

int Fixed::toInt(void) const {
	return (result >> frac_bits);
}

Fixed& Fixed::operator=(const Fixed& other) { 
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->result = other.result;
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& out, const Fixed& obj) {
	out << obj.toFloat();
	return (out);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (result);
}

void	Fixed::setRawBits(int const raw) {
	this->result = raw;
}