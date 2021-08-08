//
// Created by shaurmyashka on 7/14/21.
//

#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "WrongAnimal.h"
#include "WrongCat.h"

int main(){
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!j->makeSound();
	meta->makeSound();

	const WrongAnimal* w_cat = new WrongCat();
	std::cout << w_cat->getType() << " " << std::endl;
	w_cat->makeSound();
	delete meta;
	delete j;
	delete i;
	delete w_cat;
}
