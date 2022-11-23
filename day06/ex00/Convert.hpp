#ifndef CONVERT_HPP
#define CONVERT_HPP

# include <iostream>

class Convert
{
private:
	double num;
public:
	Convert(/* args */);
	~Convert();
	Convert(const Convert &src);
	Convert &operator=(const Convert &src);

	void setValue() const;
	double getValue() const;

	void toChar() const;
	void toInt() const;
	void toFloat() const;
	void toDouble() const;

	void convert(const std::string &name) const;

	typedef void(Convert::*func)() const;

};


#endif