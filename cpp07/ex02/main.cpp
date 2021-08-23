//
// Created by shaurmyashka on 8/23/21.
//

#include "Array.h"
#include <iostream>
#include <string>

int main ()
{
	Array<int> array(5);
	for (int i = 0; i < (array.size()); i++){
		array[i] = (i + 1) * 2;
		std::cout << "element №" << i + 1 << ":\t" << array[i] << std::endl;
	}

	Array<std::string> str_array(5);
	std::string word = "Hello";
	for (int i = 0; i < (array.size()); i++){
		str_array[i] = word[i];
		std::cout << str_array[i] << std::endl;
	}

}
