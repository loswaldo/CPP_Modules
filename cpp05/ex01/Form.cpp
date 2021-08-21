//
// Created by shaurmyashka on 8/19/21.
//

#include "Form.h"

Form::~Form() {

}

Form::Form(std::string newName, unsigned int newSignGrade, unsigned int newExecuteGrade) :name(newName), isSigned(false),
	 signGrade(newSignGrade), executeGrade(newExecuteGrade) {
	if (signGrade > 150 || executeGrade > 150){
		throw GradeTooHighException();
	} else if (signGrade < 1 || executeGrade < 1){
		throw GradeTooLowException();
	}

}

bool Form::getIsSigned() const {
	return isSigned;
}

unsigned int Form::getSignGrade() const {
	return signGrade;
}

unsigned int Form::getExecuteGrade() const {
	return executeGrade;
}

std::string Form::getName() const {
	return name;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
	if(bureaucrat.getGrade() <= this->getSignGrade()) {
		this->isSigned = true;
	} else {
		throw GradeTooLowException();
	}
}

Form &Form::operator=(const Form &form) {
	if (this != &form)
	{
		this->isSigned = form.isSigned;
		this->executeGrade = form.executeGrade;
		this->signGrade = form.signGrade;
		this->name = form.name;
	}
	return *this;
}

Form::Form(const Form &form) : name(form.name), isSigned(form.isSigned), signGrade(form.executeGrade),
		executeGrade(form.executeGrade){
}


const char *Form::GradeTooHighException::what() const throw() {
	return "You can\'t create form with grade higher than 1";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "You can\'t create form with grade less than 150";
}

std::ostream & operator<<(std::ostream & out, const Form & form) {
	out << "Form " << form.getName() << (form.getIsSigned() ? " is signed" : " is not signed") << ", "
	<< "minimum grade to sign " << form.getSignGrade() << ", minimum grade to execute " << form.getExecuteGrade();
	return out;
}