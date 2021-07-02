#include <iostream>

int main()
{
	std::string value = "HI THIS IS BRAIN";
	std::string *valuePtr = &value;
	std::string &valueRef = value;

//	std::cout << "POINTER : " << *valuePtr << std::endl;
//	std::cout << "REFERENCE : " << valueRef << std::endl;
	std::cout << "POINTER : " << *valuePtr << std::endl;
	std::cout << "REFERENCE : " << valueRef << std::endl;
}