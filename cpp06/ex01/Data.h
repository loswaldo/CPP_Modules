//
// Created by shaurmyashka on 8/23/21.
//

#ifndef CPP00_DATA_H
#define CPP00_DATA_H

#include <iostream>
#define LEN 6

struct Data{
	std::string string;
	int num;
};
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif //CPP00_DATA_H
