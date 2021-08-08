//
// Created by shaurmyashka on 7/14/21.
//

#ifndef CPP00_BRAIN_H
#define CPP00_BRAIN_H

#include <iostream>

class Brain {
private:
	std::string ideas[100];
public:
	Brain();
	Brain(std::string *array);
	Brain(const Brain &brain);
	Brain& operator= (const Brain &brain);
	~Brain();
	void setIdeas(std::string *array);
};


#endif //CPP00_BRAIN_H
