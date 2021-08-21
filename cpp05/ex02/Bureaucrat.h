//
// Created by shaurmyashka on 8/19/21.
//

#ifndef CPP00_BUREAUCRAT_H
#define CPP00_BUREAUCRAT_H

#include <iostream>
#include "Form.h"

class Form;
class Bureaucrat {
private:
	std::string name;
	unsigned int grade;
public:
	Bureaucrat(std::string newName, unsigned int newGrade);
	virtual ~Bureaucrat();

	Bureaucrat & operator=(const Bureaucrat &bureaucrat);
	Bureaucrat(const Bureaucrat &bureaucrat);

	std::string getName() const;
	unsigned int getGrade() const;
	void incGrade();
	void decGrade();

	void signForm(Form & form);
	void executeForm(Form const & form);


class GradeTooHighException : public std::exception{
	const char * what() const throw();
};

class GradeTooLowException : public std::exception{
	const char * what() const throw();
};

};

std::ostream&  operator<<(std::ostream & out, const Bureaucrat &bureaucrat);


#endif //CPP00_BUREAUCRAT_H
