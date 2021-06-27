#include "phonebook.h"

/**
 * default constructor
 */
Contact::Contact() : firstName(""), lastName(""), nickname(""), login(""), postalAddress(""),
					 emailAddress(""), phoneNumber(""), birthdayDate(""), favoriteMeal(""),
					 underwearColor(""), darkestSecret(""){};

/**
 * default constructor
 */
PhoneBook::PhoneBook() : i(0) {}