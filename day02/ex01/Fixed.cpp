#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &a) {
	std::cout << "Copy assigment operator called" << std::endl;
	if (this == &a)
		return (*this);
	this->value = a.getRawBits();
	return(*this);
} 

Fixed::Fixed(const Fixed &a) {
	std::cout << "Copy constructor called" << std::endl;
	this->value = a.getRawBits();
}

int Fixed::getRawBits(void) const {
	return (this->value);
}

void Fixed::setRawBits(int const raw) {
	this->value = raw;
}

float Fixed::toFloat() const {
	return((float)this->value / (1 << this->_fractBits));
}

int Fixed::toInt() const {
	return(this->value >> this->_fractBits);
}

Fixed::Fixed(const int num)
{
    this->value = num << this->_fractBits;
	std::cout << "Int constructor called " << std::endl;
}

Fixed::Fixed(const float num)
{
    this->value = roundf(num * (1 << this->_fractBits));
	std::cout << "Float constructor called " << std::endl;
}

std::ostream & operator << (std::ostream &stream, Fixed const & number)
{
    stream << number.toFloat();
	return (stream);
}