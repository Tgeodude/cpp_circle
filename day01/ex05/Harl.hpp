#ifndef HARL_HPP
#define HARL_HPP

# include <string>
# include <iostream> 

class Harl {

	private :
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		typedef void (Harl::*arrOfFunc)(void);
		static arrOfFunc arr[4];
	public :
		void complain(std::string level);
};

#endif