//
// Created by shaurmyashka on 8/23/21.
//

#ifndef CPP00_ARRAY_H
#define CPP00_ARRAY_H

#include <iostream>

template<typename T>
class Array {
private:
	T *elements;
	unsigned int len;
public:
	Array(){
		elements = NULL;
		len = 0;
	}
	Array(unsigned int n){
		elements = new T[n];
		len = n;
	}
	Array(const Array & array): len(array.len){
		elements = new T[array.len];
		for (int i = 0; i < array.len; i++)
		{
			this->elements[i] = array.elements[i];
		}
	}

	class OutOfRangeException : public std::exception {
		const char * what() const throw();
	};

	Array & operator =(const Array & array){
		if (this != &array){
			this->len = array.len;
			delete[] this->elements;
			this->elements = new T[len];
			for (int i = 0; i < len; ++i) {
				this->elements[i] = array.elements[i];
			}
		}
	}

	virtual ~Array(){
		delete[] elements;
		elements = NULL;
		len = 0;
	}

	T& operator[](const int index){
		if (index < static_cast<int>(len))
			return elements[index];
		else
			throw OutOfRangeException();
	}

	int size(){
		return static_cast<int>(len);
	}



};


template<typename T>
const char *Array<T>::OutOfRangeException::what() const throw() {
	return "Out of range of elements";
}

#endif //CPP00_ARRAY_H
