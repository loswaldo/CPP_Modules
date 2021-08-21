//
// Created by shaurmyashka on 8/21/21.
//

#include "Intern.h"
#include "ShrubberyCreationForm.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"

Form *doPresidentalPardon(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form *doRodotomyRequest(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form *doShrubberyCreation(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form *Intern::makeForm(std::string name, std::string target) {
	t_pair types[3] =
	{{.doForm = doPresidentalPardon,.name = "presidental pardon"},
	{.doForm = doRodotomyRequest, .name = "robotomy request"},
	{.doForm = doShrubberyCreation, .name ="shrubbery creation"}};
	for (int i = 0; i < 3; i++)
	{
		if (name == types[i].name)
		{
			std::cout << "Intern creates form:" << name << std::endl;
			return types[i].doForm(target);
		}
	}
	throw FormNotFoundException();
}

Intern::Intern() {

}

Intern::~Intern() {

}

Intern::Intern(const Intern &intern) {
	(void)intern;
}

Intern &Intern::operator=(const Intern &intern) {
	(void)intern;
	return *this;
}

const char *Intern::FormNotFoundException::what() const throw() {
	return "Can\'t fount the form with that name";
}