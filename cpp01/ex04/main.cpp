//
// Created by shaurmyashka on 7/2/21.
//
#include <iostream>
#include <fstream>
#include <cstring>

int main(int ac, char **av)
{
	std::string content;
	std::string replace = ".replace";
	if (ac != 4)
	{
		std::cout << "wrong args";
		return (1);/*todo: error*/
	}
	std::fstream outf(av[1]);
	if (!outf)
	{
		std::cout << "can\'t open file";
		return 1;
	}/*todo: error*/
	std::fstream result((replace.insert(0, av[1])).c_str(), std::ios::out);
	if (!result)
	{
		std::cout << "can\'t create file";
		return 1;
	}
	while (!outf.eof())
	{
		int pos;
		std::getline(outf, content);
		pos = 0;
		while ((pos = content.find(av[2], pos + strlen(av[3]))) != std::string::npos)
		{
			content.erase(pos, strlen(av[2]));
			content.insert(pos, av[3]);
		}
		result << content << "\n";
		std::cout << content << std::endl;
	}
}