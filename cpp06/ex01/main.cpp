//
// Created by shaurmyashka on 8/23/21.
//

#include <iostream>
#include <stdint.h>
#include <cstdlib>
#include <ctime>

#include "Data.h"

char randString()
{
	int num;
	srand(static_cast<unsigned int>(time(0)));
		num = rand() % 127;
		if (isprint(num))
		{
			return static_cast<char>(num);
		} else{
			return randString();
		}
}

uintptr_t serialize(Data* ptr)
{
	char * str = new char [LEN + 4]; ///because len of string in Data - 6
	for (int i = 0; i < LEN; i++){
		str[i] = randString();
	}
	str[LEN] = '\0';
	std::cout << "string: " << str << std::endl;
	int num = rand() % INT32_MAX;
	std::cout << "number: " << num << std::endl;
	*reinterpret_cast<int*>(str + LEN) = num;
	return reinterpret_cast<uintptr_t>(str);
}

Data* deserialize(uintptr_t raw)
{
	Data * data = new Data;
	data->string = std::string(reinterpret_cast<char*>(raw), LEN);
	std::cout << "string: " << data->string << std::endl;
	data->num = *reinterpret_cast<int*>(raw + LEN);
	std::cout << "number: " << data->num << std::endl;
	return data;
}

int main()
{
	Data *data;
	uintptr_t raw = serialize(data);
	deserialize(raw);

}