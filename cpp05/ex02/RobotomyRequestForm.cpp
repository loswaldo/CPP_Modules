//
// Created by shaurmyashka on 8/21/21.
//

#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
					Form("RobotomyRequestForm", 72, 137),
					target(target) {

}

RobotomyRequestForm::~RobotomyRequestForm() {

}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::cout << "drilling noises, and tell us that " << target  <<" has been robotomized successfully 50% of the time." << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomyRequestForm) {
	if (this != &robotomyRequestForm)
	{
		this->target = robotomyRequestForm.target;
	}
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm) :
					Form("RobotomyRequestForm", 72, 137),
					target(robotomyRequestForm.target) {

};


