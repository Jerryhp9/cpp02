#include "Fixed.hpp"

Fixed::Fixed() {
	_result = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num) {
	_result = num << _frac_bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num) {
	_result = roundf(num * (1 << _frac_bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
	_result = other._result;
	std::cout << "Copy constructor called" << std::endl;
}

float Fixed::toFloat(void) const {
	return (float(_result) / (1 << _frac_bits));
}

int Fixed::toInt(void) const {
	return (_result >> _frac_bits);
}

Fixed& Fixed::operator=(const Fixed& other) { 
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_result = other._result;
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
	return (_result);
}

void	Fixed::setRawBits(int const raw) {
	this->_result = raw;
}