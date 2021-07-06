//
// Created by shaurmyashka on 7/7/21.
//

#include <iostream>
#include "Karen.h"

int main(int ac, char **av)
{
	Karen karen;
	if (ac != 2)
	{
		return 1; /*todo: error*/
	}
	karen.complain(av[1]);
}