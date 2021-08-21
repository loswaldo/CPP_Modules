//
// Created by shaurmyashka on 8/19/21.
//

#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(std::string newName, unsigned int newGrade) : name(newName){
	if (newGrade > 150){
		throw GradeTooLowException();
	} else if (newGrade < 1){
		throw GradeTooHighException();
	} else{
		grade = newGrade;
	}
}

Bureaucrat::~Bureaucrat() {

}

std::string Bureaucrat::getName() const {
	return name;
}

unsigned int Bureaucrat::getGrade() const {
	return grade;
}

void Bureaucrat::incGrade() {
	if (grade == 1){
		throw GradeTooHighException();
	} else{
		grade++;
	}
}

void Bureaucrat::decGrade() {
	if (grade == 150){
		throw GradeTooLowException();
	} else{
		grade--;
	}
}

void Bureaucrat::signForm(Form & form){
	try {
		form.beSigned(*this);
		std::cout << this->name << " signs form " << form.getName() << std::endl;
	} catch(std::exception & exception){
		std::cout << this->name <<  " cannot sing form " << form.getName() << " because " << exception.what() << std::endl;
	}
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
	if (this != &bureaucrat)
	{
		this->grade = bureaucrat.grade;
		this->name = bureaucrat.name;
	}
	return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) {
	this->name = bureaucrat.name;
	this->grade = bureaucrat.grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "You can\'t create bureaucrat with grade higher than 1";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "You can\'t create bureaucrat with grade less than 150";
}

std::ostream&  operator<<(std::ostream & out, const Bureaucrat &bureaucrat){
	out << "Bureaucrat\'s name: " << bureaucrat.getName() << " and he\'s grade: " << bureaucrat.getGrade();
	return out;
}