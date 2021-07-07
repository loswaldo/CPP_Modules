//
// Created by shaurmyashka on 7/7/21.
//

#include <iostream>
#include <cmath>
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

Fixed &Fixed::operator=(const Fixed &fixed){
	std::cout << "Assignation operator called" << std::endl;
	if (this != &fixed)
		this->value = fixed.getRawBits();
	return *this;
}

Fixed::Fixed(const int i){
	std::cout << "Int constructor called" << std::endl;
	value = i << fraction;
}

Fixed::Fixed(const float i){
	std::cout << "Float constructor called" << std::endl;
	value = roundf(i * (1 << fraction));
}

float Fixed::toFloat() const {
	return (static_cast<float>(value) / static_cast<float>(1 << fraction));
}

int Fixed::toInt() const {
	return value >> fraction;
}

std::ostream & operator<<(std::ostream & out, const Fixed & fixed) {
	out << fixed.toFloat();
	return out;
}
