//
// Created by shaurmyashka on 8/21/21.
//

#ifndef CPP00_INTERN_H
#define CPP00_INTERN_H

#include "Form.h"

class Intern {
public:
	Intern();
	virtual  ~Intern();
	Intern(const Intern & intern);
	Intern & operator=(const Intern & intern);
	Form *makeForm(std::string name, std::string target);

	class FormNotFoundException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
};

typedef struct t_pair{
	Form * (*doForm)(std::string target);
	std::string name;
} t_pair;

#endif //CPP00_INTERN_H
