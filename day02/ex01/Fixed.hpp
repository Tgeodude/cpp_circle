#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

	private:
		int value;
		const static int _fractBits = 8;

	public:
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed();
		~Fixed();
		Fixed(const Fixed &a);
		Fixed &operator = (const Fixed &a);

		float toFloat(void) const;
		int toInt(void) const;
		Fixed(const int num);
		Fixed(const float num);
};

std::ostream &operator<<(std::ostream &stream, Fixed const &number);

#endif