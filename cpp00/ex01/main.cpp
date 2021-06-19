#include <iostream>
#include <string>
#include "phonebook.h"
#include <iomanip>

using namespace std;

string formatting_string(string value)
{
	if (value.size() > 10)
	{
		value.erase(9);
		value.append(".");
	} else if (value.size() < 10)
	{
		value.insert(1, " ", 10 - value.size());
	}
	return value;
}

void PhoneBook::printContact()
{
	for (int counter = 0; counter < i; counter++)
	{
		/*std::cout << std::left << std::setw(10) << "Hello" << "World\n";*/
		cout << right << setw(10) << counter << "|" <<
		contact[counter].getFirstName().size() > 10 : .erase(9).append(".")
		<< "|" << contact[counter].getLastName().erase(9).append(".") <<
		contact[counter].getNickname().erase(9).append(".") << endl;
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

_Noreturn void loop(PhoneBook phoneBook)
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

Contact::Contact() : firstName(""), lastName(""), nickname(""), login(""), postalAddress(""),
					 emailAddress(""), phoneNumber(""), birthdayDate(""), favoriteMeal(""),
					 underwearColor(""), darkestSecret("") {}

PhoneBook::PhoneBook() : i(0) {}

int main (int ac, char *av[])
{
	PhoneBook phoneBook;
	loop(phoneBook);
	cout << "Hello";
}
