//
// Created by shaurmyashka on 8/19/21.
//

#include <iostream>
#include "Bureaucrat.h"

int main() {
	{
		Bureaucrat b("b", 150);
		b.incGrade();
		b.incGrade();
		std::cout << b << std::endl;
		b.decGrade();
		std::cout << b << std::endl;
	}

	try {
		Bureaucrat b("b", 180);
	} catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}

	try {
		Bureaucrat b("b", 0);
	} catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}

	try {
		Bureaucrat b("b", 150);
		b.decGrade();
	} catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}

	try {
		Bureaucrat b("b", 1);
		b.incGrade();
	} catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}

}