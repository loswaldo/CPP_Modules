//
// Created by shaurmyashka on 7/4/21.
//

#ifndef CPP00_KAREN_H
#define CPP00_KAREN_H

#include <iostream>

class Karen {
private:
	void info();
	void debug();
	void error();
	void warning();

public:
	void complain( std::string level );
	typedef void(Karen::*method)();
	static method methods[4];
};


#endif //CPP00_KAREN_H
