#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "phonebook.h"

using namespace std;

string formatting_string(string value)
{
	string spaces =  " ";
	if (value.size() > 10)
	{
		value.erase(9);
		value.append(".");
		return value;
	} else if (value.size() < 10)
	{
		int space_counter = 10 - value.size();
		for (int i = 0; i < space_counter - 1; i++)
		{
			spaces.append(" ");
		}
		spaces.append(value);
		return spaces;
	} else
	{
		return (value);
	}
}

/**
 * method for command search
 */
void PhoneBook::printContact()
{
	string value;
	for (int counter = 0; counter < i; counter++)
	{
		cout << right << setw(10) << counter << "|" <<
		formatting_string(contact[counter].getFirstName())
		<< "|" << formatting_string(contact[counter].getLastName()) << "|" <<
		formatting_string(contact[counter].getNickname()) << "|" << endl;
	}
}

/**
 * method for add contact
 */
void PhoneBook::addContact()
{
	const string messages[11] = {"Write First Name:", "Write Second Name:", "Write Nickname:",
							  "Write Login", "Write Postal Address:", "Write Email Address:",
							  "Write Phone Number:", "Write Birthday Date:", "Write Favorite Meal:",
							  "Write Underwear Color:", "Write Darkest Secret:"};
	Contact::setter set_methods[12] = {&Contact::setFirstName, &Contact::setLastName,
											   &Contact::setNickname, &Contact::setLogin, &Contact::setPostalAddress,
											   &Contact::setEmailAddress, &Contact::setPhoneNumber, &Contact::setBirthdayDate,
											   &Contact::setFavoriteMeal, &Contact::setUnderwearColor, &Contact::setDarkestSecret};
	string value;
	if (i > 7)
	{
		cout << "You have max numbers of contact" << endl;
	} else {
		for (int counter = 0; counter < 11; counter++)
		{
			cout << messages[counter] << endl;
			cin >> value;
			(contact[i].*set_methods[counter])(value);
		}
//		cin >> value;
//		contact[i].setFirstName(value);
//		cin >> value;
//		contact[i].setLastName(value);
//		cin >> value;
//		contact[i].setNickname(value);
//		cin >> value;
//		contact[i].setLogin(value);
//		cin >> value;
//		contact[i].setPostalAddress(value);
//		cin >> value;
//		contact[i].setBirthdayDate(value);
//		cin >> value;
//		contact[i].setEmailAddress(value);
//		cin >> value;
//		contact[i].setPhoneNumber(value);
//		cin >> value;
//		contact[i].setFavoriteMeal(value);
//		cin >> value;
//		contact[i].setUnderwearColor(value);
//		cin >> value;
//		contact[i].setDarkestSecret(value);
		i++;
	}
}

/**
 * endless function with wait commands
 * @param phoneBook - class witch all contacts
 */
void loop(PhoneBook phoneBook)
{
	string command;
	while(true)
	{
		cin >> command;
		if (command == "ADD")
		{
			phoneBook.addContact();
			cout << "Hello";
		}
		else if (command == "SEARCH")
		{
			phoneBook.printContact();
			cout << "is search";
		} else if (command == "EXIT")
		{
			exit(0);
		}
	}
}

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

int main ()
{
	PhoneBook phoneBook;

	loop(phoneBook);
	cout << "Hello";
}
