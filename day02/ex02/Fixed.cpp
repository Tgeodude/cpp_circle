#include "Fixed.hpp"

Fixed::Fixed() {
	//std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::~Fixed() {
	//std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &a) {
	//std::cout << "Copy assigment operator called" << std::endl;
	if (this == &a)
		return (*this);
	this->value = a.getRawBits();
	return(*this);
} 

Fixed::Fixed(const Fixed &a) {
	//std::cout << "Copy constructor called" << std::endl;
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
	//std::cout << "Int constructor called " << std::endl;
}

Fixed::Fixed(const float num)
{
    this->value = roundf(num * (1 << this->_fractBits));
	//std::cout << "Float constructor called " << std::endl;
}

bool Fixed::operator>(Fixed const &a) const {
	return (this->value > a.value);
}
bool Fixed::operator<(Fixed const &a) const {
	return (this->value < a.value);
}
bool Fixed::operator>=(Fixed const &a) const {
	return (this->value >= a.value);
}
bool Fixed::operator<=(Fixed const &a) const {
	return (this->value <= a.value);
}
bool Fixed::operator==(Fixed const &a) const {
	return (this->value == a.value);
}
bool Fixed::operator!=(Fixed const &a) const {
	return (this->value != a.value);
}

Fixed Fixed::operator+(const Fixed &a) const {
	Fixed b;

	b.setRawBits(a.value + this->value);
	return (b);
}
Fixed Fixed::operator-(const Fixed &a) const {
	Fixed b;

	b.setRawBits(a.value - this->value);
	return (b);
}
Fixed Fixed::operator/(const Fixed &a) const {
	Fixed b;

	b.setRawBits((a.value << this->_fractBits) * this->value);
	return (b);
}
Fixed Fixed::operator*(const Fixed &a) const {
	Fixed b;

	b.setRawBits((a.value >> this->_fractBits) * this->value);
	return (b);
}

Fixed &Fixed::operator++() {
	//std::cout << "b" << std::endl;
	setRawBits(++this->value);
	return(*this);
}
Fixed Fixed::operator++(int) {
	//std::cout << "a" << std::endl;
	Fixed b(*this);
	setRawBits(++this->value);
	return(b);
}
Fixed &Fixed::operator--() {
	setRawBits(--this->value);
	return(*this);
}
Fixed Fixed::operator--(int) {
	Fixed b(*this);

	setRawBits(--this->value);
	return(b);
}

Fixed &Fixed::min(Fixed &a,Fixed &b)
{
    if (a < b) 
		return (a);
	return (b);
}
Fixed const&Fixed::min(const Fixed &a,const Fixed &b)
{
    if (a < b) 
		return (a);
	return (b);
}
Fixed &Fixed::max(Fixed &a,Fixed &b)
{
    if (a > b) 
		return (a);
	return (b);
}
Fixed const&Fixed::max(const Fixed &a,const Fixed &b)
{
    if (a > b) 
		return (a);
	return (b);
}

std::ostream & operator << (std::ostream &stream, Fixed const & number)
{
    stream << number.toFloat();
	return (stream);
}