//
// Created by shaurmyashka on 8/22/21.
//

#include <cstdlib>
#include "Convert.h"
Convert::Convert(std::string value) : value(value), type(UNDEFINED), i_num_value(0), d_num_value(0){
}

Convert::~Convert() {

}

Convert::Convert(const Convert &convert) : value(convert.value), type(convert.type),
				i_num_value(convert.i_num_value), d_num_value(convert.d_num_value){

}

Convert &Convert::operator=(const Convert &convert) {
	if (this != &convert){
		this->value = convert.value;
		this->type = convert.type;
		this->i_num_value = convert.i_num_value;
		this->d_num_value = convert.d_num_value;
	}
	return *this;
}

void Convert::digitDefineType()
{
	for (int i = 0; i < value.length(); i++)
	{
		if (std::isdigit(value[i])){
			type = INT;
		} else if (!std::isdigit(value[i]))
		{
			if (value[i] == '-'){
			} else if (value[i] == '.'){
				i++;
				while (i < value.length())
				{
					if (std::isdigit(value[i])){
						type = DOUBLE;
					}else if (value[i] == 'f' && i == (value.length() - 1)){
						type = FLOAT;
					} else
					{
						type = WRONG;
					}
					i++;
				}
			} else {
				type = WRONG;
			}
		}
	}
}


void Convert::digitConversation() {
	if (type == INT){
		i_num_value = atoi(value.c_str());
	} else {
		d_num_value = atof(value.c_str());
	}
}

void Convert::defineType() {
	if (value.length() == 1 && isprint(value[0])){
		type = CHAR;
		i_num_value = static_cast<int>(value[0]);
		printTypes();
	} else if (value == "nan" || value == "+inf" || value == "-inf") {
		std::cout << "CHAR: is impossible" << std::endl;
		std::cout << "INT: is impossible" << std::endl;
		std::cout << "DOUBLE: " << value << std::endl;
		std::cout << "FLOAT: " << value << std::endl;
	} else {
		digitDefineType();
		if (type == WRONG){
			throw NoValidValue();
		}
		digitConversation();
		printTypes();
	}
}

void Convert::printTypes() {
	i_num_value = static_cast<int>(d_num_value);

	if (i_num_value >= 32 && i_num_value <= 126){
		std::cout << "CHAR: " << static_cast<char>(i_num_value) << std::endl;
	} else {
		std::cout << "CHAR: non print" << std::endl;
	}
	std::cout << "INT: " << i_num_value << std::endl;
	std::cout << "DOUBLE: " << d_num_value << ((type == INT || type == CHAR) ? ".0" : "") << std::endl;
	std::cout << "FLOAT: " << static_cast<float>(d_num_value) << ((type == INT || type == CHAR) ? ".0f" : "f") << std::endl;
}

const char *Convert::NoValidValue::what() const throw() {
	return "No valid value!";
}