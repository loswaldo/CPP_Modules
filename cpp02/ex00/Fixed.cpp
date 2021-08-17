//
// Created by shaurmyashka on 7/7/21.
//

#include <iostream>
#include "Fixed.h"

Fixed::Fixed() : value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed){
	std::cout << "Copy constructor called" << std::endl;
	this->value = fixed.getRawBits();
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void Fixed::setRawBits(const int raw) {
	value = raw;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &fixed)
		this->value = fixed.getRawBits();
	return *this;
}






