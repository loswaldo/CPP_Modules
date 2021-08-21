//
// Created by shaurmyashka on 8/21/21.
//

#ifndef CPP00_ROBOTOMYREQUESTFORM_H
#define CPP00_ROBOTOMYREQUESTFORM_H

#include "Form.h"

class RobotomyRequestForm : public Form {
private:
	std::string target;
public:
	RobotomyRequestForm(std::string target);
	virtual ~RobotomyRequestForm();
	void execute(const Bureaucrat &executor) const;
	RobotomyRequestForm & operator =(const RobotomyRequestForm & robotomyRequestForm);
	RobotomyRequestForm(const RobotomyRequestForm & robotomyRequestForm);
};


#endif //CPP00_ROBOTOMYREQUESTFORM_H
