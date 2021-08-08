//
// Created by shaurmyashka on 7/14/21.
//

#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "WrongAnimal.h"
#include "WrongCat.h"

int main(){
	const Animal * array[10] =
	{new Cat(), new Cat(), new Cat(), new Cat(), new Cat(),
  	new Dog(), new Dog(), new Dog(), new Dog(), new Dog()};

	for (int i = 0; i < 10; i++)
	{
	std::cout << i << " " << array[i]->getType() << std::endl;
	array[i]->makeSound();
	}

	for (int i = 0; i < 10; i++)
	{
		delete array[i];
	}
}
