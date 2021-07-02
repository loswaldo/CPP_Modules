#include <iostream>

std::string megaphone(std::string str)
{
	for(int i = 0; str[i]; i++)
	{
		str[i] = toupper(str[i]);
	}
	return str;
}

int main (int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		for (int i = 1; av[i]; i++)
			std::cout << megaphone(av[i]);
}