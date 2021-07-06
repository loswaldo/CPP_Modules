//
// Created by shaurmyashka on 7/4/21.
//

#include "Karen.h"

void Karen::info() {
std::cout << "I love to get extra bacon for my "
			 "7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::debug() {
std::cout << "I cannot believe adding extra bacon "
			 "cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::error() {
std::cout << "I think I deserve to have some extra bacon"
			 " for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::warning() {
std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level) {

	Karen::method methods[4] = {&Karen::debug, &Karen::info,
								&Karen::warning, &Karen::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int counter = 0;
	while(counter < 4)
	{
		if (level == levels[counter])
		{
			while(counter < 4)
			{
				std::cout << "[ " << levels[counter] << " ]" << std::endl;
				(this->*methods[counter])();
				counter++;
			}
			break;
		}
		counter++;
	}
	if (counter > 4)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
