#include "Fixed.hpp"

Fixed::Fixed() {
	result = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num) {
	result = num << frac_bits;
	std::cout << num << std::endl;
	std::cout << result << std::endl;
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

bool	Fixed::operator<(const Fixed& obj) const {
	return (this->result < obj.result);
}

bool	Fixed::operator>(const Fixed& obj) const {
	return (this->result > obj.result);
}

bool	Fixed::operator<=(const Fixed& obj) const {
	return (this->result <= obj.result);
}

bool	Fixed::operator>=(const Fixed& obj) const {
	return (this->result >= obj.result);
}

bool	Fixed::operator==(const Fixed& obj) const {
	return (this->result == obj.result);
}

bool	Fixed::operator!=(const Fixed& obj) const {
	return (this->result != obj.result);
}

Fixed Fixed::operator+(const Fixed& obj) const {
	Fixed r;
	r.setRawBits(this->result + obj.result);
	return (r);
}

Fixed Fixed::operator-(const Fixed& obj) const {
	Fixed r; 
	r.setRawBits(this->result - obj.result);
	return (r);
}

Fixed Fixed::operator*(const Fixed& obj) const {
	Fixed r;
	long long tmp = (long long)this->result * obj.result;
	r.setRawBits((int)(tmp >> frac_bits));
	return (r);
}

Fixed Fixed::operator/(const Fixed& obj) const {
	Fixed r;
	long long tmp = ((long long)this->result << frac_bits) / obj.result;
	r.setRawBits((int)tmp);
	return (r);
}

Fixed& Fixed::operator++() {
	this->result++;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp = *this;
	this->result++;
	return (tmp);
}

Fixed& Fixed::operator--() {
	this->result--;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed tmp = *this;
	this->result--;
	return (tmp);
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

Fixed	Fixed::min(Fixed &a, Fixed &b) {
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed	Fixed::min(Fixed const a, Fixed const b) {
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed	Fixed::max(Fixed &a, Fixed &b) {
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed	Fixed::max(Fixed const a, Fixed const b) {
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}