//
// Created by shaurmyashka on 8/19/21.
//

#ifndef CPP00_FORM_H
#define CPP00_FORM_H

#include <iostream>
#include "Bureaucrat.h"

class Bureaucrat;
class Form {
private:
	std::string name;
	bool isSigned;
	unsigned int signGrade;
	unsigned int executeGrade;
public:
	Form(std::string newName, unsigned int newSignGrade, unsigned int newExecuteGrade);
	virtual ~Form();
	bool getIsSigned() const;
	unsigned int getSignGrade() const;
	unsigned int getExecuteGrade() const;
	std::string getName() const;
	void beSigned(const Bureaucrat & bureaucrat);

	Form& operator = (const Form &form);
	Form(const Form &form);
	virtual void execute(Bureaucrat const & executor) const;

class GradeTooHighException : public std::exception{
	const char * what() const throw();
};

class GradeTooLowException : public std::exception{
	const char * what() const throw();
};

class FormIsNotSignedException : public std::exception {
public:
	virtual const char* what() const throw();
};

};
std::ostream&  operator<<(std::ostream & out, const Form &form);


#endif //CPP00_FORM_H
