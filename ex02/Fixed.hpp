#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int					_result;
		static const int	_frac_bits = 8;
	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float numb);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		bool	operator>(const Fixed& obj) const;
		bool	operator<(const Fixed& obj) const;
		bool	operator>=(const Fixed& obj) const;
		bool	operator<=(const Fixed& obj) const;
		bool	operator==(const Fixed& obj) const;
		bool	operator!=(const Fixed& obj) const;
		Fixed	operator+(const Fixed& obj) const;
		Fixed	operator-(const Fixed& obj) const;
		Fixed	operator*(const Fixed& obj) const;
		Fixed	operator/(const Fixed& obj) const;
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);
		~Fixed();

		float			toFloat(void)const;
		int				toInt(void)const;
		int				getRawBits(void)const;
		void			setRawBits(int const raw);
		static Fixed	min(Fixed &a, Fixed &b);
		static Fixed	min(Fixed const a, Fixed const b);
		static Fixed	max(Fixed &a, Fixed &b);
		static Fixed	max(Fixed const a, Fixed const b);
};

std::ostream& operator<<(std::ostream& out, const Fixed& obj);

#endif