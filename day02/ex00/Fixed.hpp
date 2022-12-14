#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

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
};

#endif