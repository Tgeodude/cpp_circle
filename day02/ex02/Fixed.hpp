#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

	private:
		int value;
		const static int _fractBits = 8;

	public:
		Fixed();
		~Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &a);
		Fixed &operator = (const Fixed &a);

		bool operator>(Fixed const &a) const;
		bool operator<(Fixed const &a) const;
		bool operator>=(Fixed const &a) const;
		bool operator<=(Fixed const &a) const;
		bool operator==(Fixed const &a) const;
		bool operator!=(Fixed const &a) const;

		Fixed operator+(const Fixed &a) const;
		Fixed operator-(const Fixed &a) const;
		Fixed operator/(const Fixed &a) const;
		Fixed operator*(const Fixed &a) const;

		Fixed & operator++(void);
		Fixed  operator++(int);
		Fixed & operator--(void);
		Fixed  operator--(int);

		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed const &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static Fixed const &max(const Fixed &a, const Fixed &b);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		
};

std::ostream &operator<<(std::ostream &stream, Fixed const &number);

#endif