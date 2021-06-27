
#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.h"

using namespace std;

/**
 * array of contacts &
 * i - index of last contact
 */
class PhoneBook{
private:
	Contact contact[8];
	int i;
public:
	PhoneBook();
	void addContact();
	void printAllContact();
	void printFullContact();
};

#endif
