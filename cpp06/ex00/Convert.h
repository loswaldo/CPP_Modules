//
// Created by shaurmyashka on 8/22/21.
//

#ifndef CPP00_CONVERT_H
#define CPP00_CONVERT_H

#include <iostream>

#define UNDEFINED 0
#define CHAR 1
#define INT 2
#define DOUBLE 3
#define FLOAT 4
#define WRONG 5

class Convert {
private:
	std::string value;
	unsigned  int type;
	int i_num_value;
	double d_num_value;
public:
	Convert(std::string value);
	virtual ~Convert();
	Convert(const Convert & convert);
	Convert & operator=(const Convert & convert);
	void defineType();
	void digitDefineType();
	void digitConversation();
	void printTypes();

class NoValidValue : public std::exception{
	const char * what() const throw();
};
};


#endif //CPP00_CONVERT_H
