#include "Convert.hpp"

Convert::Convert() {}

Convert::~Convert() {}

Convert::Convert(const Convert &src) {
    *this = src;
}

Convert &Convert::operator=(const Convert &arg) {
    this->num = arg.getValue();
    return (*this);
}

void Convert::setValue(double _num){
    this->num = _num;
}

double Convert::getValue() const {
    return (this->num);
}  

void Convert::toChar() const {
    std::cout << "char: ";
    if (!isascii(static_cast<int>(this->num)))
        throw Convert::impossibleToConvert();
    if (!isprint(static_cast<int>(this->num)))
        throw Convert::notDisplayable();
    std::cout << static_cast<char>(this->num) << std::endl;
}

void Convert::toInt() const {
    std::cout << "int: ";
    if (this->num < std::numeric_limits<int>::min() || this->num > std::numeric_limits<int>::max() \
     || std::isnan(this->num) || std::isinf(this->num))
        throw Convert::impossibleToConvert();
    std::cout << static_cast<int>(this->num) << std::endl;
}

void Convert::toFloat() const {
    std::cout << "float: ";
    if (num - static_cast<int>(num) == 0 || std::isnan(this->num) || std::isinf(this->num))
        std::cout<<num<<".0f"<<std::endl;
    else 
    {
        if(!std::signbit(num) && std::isinf(num))
            std::cout<<"+";
        std::cout<<static_cast<float>(num)<<"f"<<std::endl;
    }
}

void Convert::toDouble() const {
    std::cout << "double: ";
    if (std::isnan(this->num))
        std::cout << "nan" << std::endl;
    else if (std::isinf(this->num) && std::signbit(this->num))
        std::cout << "+inf" << std::endl;
    else if (num - static_cast<int>(this->num) == 0 && !std::isnan(this->num) && !std::isinf(this->num))
        std::cout << this->num << ".0" << std::endl;
    else if (num <=1e-14 && num >= 1e-14)
        std::cout << "0.0" << std::endl;
    else
        std::cout << static_cast<double>(this->num) << std::endl;
}

void Convert::convert(const std::string &_name) const {
    std::string arr[4]={"char","int","float","double"};
    Convert::func functions[4] = {&Convert::toChar, &Convert::toInt, &Convert::toFloat, &Convert::toDouble};

    int i = -1;
    while(++i, i < 4)
    {
        if (arr[i] == _name)
        {
            try
            {
                (this->*(functions[i]))();
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
            break;
        }
    }
    if(i == 4)
        std::cout << "Can`t do this. Unnkown type."<< std::endl;
}

const char *Convert::notDisplayable::what() const throw()
{
	return("not displayable");
}

const char *Convert::impossibleToConvert::what() const throw()
{
	return("impossible to convert");
}