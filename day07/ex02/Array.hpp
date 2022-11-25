#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>
# include <exception>

template<typename T>

class Array
{
private:
	T *array;
	unsigned int len;
public:
	Array(/* args */);
	~Array() {
		if (array)
			delete [] array;
	};
	
	Array(Array &src) : array(new T[src.len]), len(src.len)
	{
		for (unsigned int i = 0; i < src.len; i++)
		{
			array[i] = src.array[i];
		}
	};

	Array(unsigned int n)
	{
		len = n;
		array = new T[n]();
	}

	Array &operator=(Array const &src)
	{
		array = src.array;
        len = src.len;
        return (*this);
	}

	T &operator[](unsigned int ind)
    {
        if(ind < 0 || ind > len)
            throw OutOfRange();
        return(array[ind]);
    };

    unsigned int size()
    {
        return(len);
    }
    
    class OutOfRange : public std::exception
    {
        public :
			virtual const char* what() const throw()
			{
				return ("Exception: index out of range");
            }
    };


};

#endif