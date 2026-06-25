#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int					result;
		static const int	frac_bits = 8;
	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float numb);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();

		float	toFloat(void)const;
		int		toInt(void)const;
		int		getRawBits(void)const;
		void	setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& out, const Fixed& obj);

#endif