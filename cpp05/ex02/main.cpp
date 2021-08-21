//
// Created by shaurmyashka on 8/19/21.
//

#include <iostream>
#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"

int main() {

	{
		Bureaucrat a("Bureaucrat A", 1);
		ShrubberyCreationForm form("home");
		a.signForm(form);
		a.executeForm(form);
	}

	{
		Bureaucrat a("Bureaucrat A", 1);
		PresidentialPardonForm form("home");
		a.signForm(form);
		a.executeForm(form);
	}

	{
		Bureaucrat a("Bureaucrat A", 1);
		RobotomyRequestForm form("home");
		a.signForm(form);
		a.executeForm(form);
	}

	std::cout << std::endl;

	{
		Bureaucrat a("Bureaucrat A", 150);
		RobotomyRequestForm form("home");
		a.signForm(form);
		a.executeForm(form);
	}

	{
		Bureaucrat a("Bureaucrat A", 1);
		RobotomyRequestForm form("home");
		a.executeForm(form);
	}

	{
		Bureaucrat a("Bureaucrat A", 1);
		Bureaucrat b("Bureaucrat B", 150);
		RobotomyRequestForm form("home");
		a.signForm(form);
		b.executeForm(form);
	}

}