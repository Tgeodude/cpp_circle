#ifndef CONVERT_HPP
#define CONVERT_HPP

# include <iostream>
# include <cmath>
# include <limits>

class Convert
{
private:
	double num;
public:
	Convert(/* args */);
	~Convert();
	Convert(const Convert &src);
	Convert &operator=(const Convert &arg);

	void setValue(double _num);
	double getValue() const;

	void toChar() const;
	void toInt() const;
	void toFloat() const;
	void toDouble() const;

	void convert(const std::string &_name) const;

	typedef void(Convert::*func)() const;
	class notDisplayable: public std::exception 
	{
		public:
			virtual const char *what() const throw();
	};
	class impossibleToConvert: public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

};


#endif