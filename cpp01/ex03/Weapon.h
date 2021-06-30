#ifndef CPP00_WEAPON_H
#define CPP00_WEAPON_H

#include <iostream>

class Weapon {
private:
	std::string  type;
public:
	Weapon();
	void setType(std::string typeName);
	std::string getType();
};


#endif //CPP00_WEAPON_H
