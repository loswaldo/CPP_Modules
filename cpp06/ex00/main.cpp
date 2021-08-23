//
// Created by shaurmyashka on 8/22/21.
//

#include <iostream>
#include "Convert.h"

int main (int ac, char **av)
{
	if (ac == 1){
		std::cout << "I can\'t work without args :(" << std::endl;
	} else{
		for (int i = 1; av[i]; i++){
			class Convert value(av[i]);
			value.defineType();
		}
	}
}