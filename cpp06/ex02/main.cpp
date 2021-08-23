//
// Created by shaurmyashka on 8/23/21.
//
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

#include "Base.h"
#include "B.h"
#include "A.h"
#include "C.h"

Base * generate(void){
	int num = rand() % 3;
	if (num == 1){
		std::cout << "i generate A class, but it a secret" << std::endl;
		return new A;
	} else if (num == 2){
		std::cout << "i generate B class, but it a secret" << std::endl;
		return new B;
	} else {
		std::cout << "i generate C class, but it a secret" << std::endl;
		return new C;
	}
}

void identify(Base* p){
	if (dynamic_cast<A*>(p) != NULL){
		std::cout << "Is A class" << std::endl;
	} else if (dynamic_cast<B*>(p) != NULL){
		std::cout << "Is B class" << std::endl;
	} else if (dynamic_cast<C*>(p) != NULL){
		std::cout << "Is C class" << std::endl;
	} else {
		std::cout << "ERROR"<< std::endl;
	}
}

void identify(Base& p){
	identify(&p);
}

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	identify(generate());
	usleep(250);
	identify(*generate());

}
