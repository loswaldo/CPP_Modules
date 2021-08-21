//
// Created by shaurmyashka on 8/21/21.
//

#ifndef CPP00_SHRUBBERYCREATIONFORM_H
#define CPP00_SHRUBBERYCREATIONFORM_H

#include "Form.h"

class ShrubberyCreationForm : public Form {
private:
	std::string target;
public:
	ShrubberyCreationForm(std::string target);
	virtual ~ShrubberyCreationForm();
	void execute(const Bureaucrat &executor) const;
	ShrubberyCreationForm(const ShrubberyCreationForm & shrubberyCreationForm);
	ShrubberyCreationForm & operator=(const ShrubberyCreationForm & shrubberyCreationForm);
};


#endif //CPP00_SHRUBBERYCREATIONFORM_H
