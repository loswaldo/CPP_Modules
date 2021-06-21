#include <iostream>
#include <string>
#include "phonebook.h"
#include <iomanip>

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

void PhoneBook::addContact()
{
	string value;

	cin >> value;
	contact[i].setFirstName(value);
	cin >> value;
	contact[i].setLastName(value);
	cin >> value;
	contact[i].setNickname(value);
	cin >> value;
	contact[i].setLogin(value);
	cin >> value;
	contact[i].setPostalAddress(value);
	cin >> value;
	contact[i].setBirthdayDate(value);
	cin >> value;
	contact[i].setEmailAddress(value);
	cin >> value;
	contact[i].setPhoneNumber(value);
	cin >> value;
	contact[i].setFavoriteMeal(value);
	cin >> value;
	contact[i].setUnderwearColor(value);
	cin >> value;
	contact[i].setDarkestSecret(value);
	i++;
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
		if (command == "SEARCH")
		{
			phoneBook.printContact();
			cout << "is search";
		}
	}
}

/**
 * default constructor
 */
Contact::Contact() : firstName(""), lastName(""), nickname(""), login(""), postalAddress(""),
					 emailAddress(""), phoneNumber(""), birthdayDate(""), favoriteMeal(""),
					 underwearColor(""), darkestSecret("") {}

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
