//
// Created by shaurmyashka on 8/21/21.
//

#ifndef CPP00_PRESIDENTIALPARDONFORM_H
#define CPP00_PRESIDENTIALPARDONFORM_H

#include "Form.h"

class PresidentialPardonForm : public Form {
private:
	std::string target;
public:
	PresidentialPardonForm(std::string target);
	virtual ~PresidentialPardonForm();
	void execute(const Bureaucrat &executor) const;
	PresidentialPardonForm & operator=(const PresidentialPardonForm & presidentialPardonForm);
	PresidentialPardonForm(const PresidentialPardonForm &presidentialPardonForm);
};


#endif //CPP00_PRESIDENTIALPARDONFORM_H
