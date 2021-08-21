//
// Created by shaurmyashka on 8/21/21.
//

#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: Form("PresidentialPardonForm", 25, 5),target(target){

}

PresidentialPardonForm::~PresidentialPardonForm() {

}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::cout << target << "has been pardoned by Zafod Beeblebrox." << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &presidentialPardonForm) {
	if (this != &presidentialPardonForm)
	{
		this->target = presidentialPardonForm.target;
	}
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidentialPardonForm)
: Form("PresidentialPardonForm", 25, 5), target(presidentialPardonForm.target){

}
