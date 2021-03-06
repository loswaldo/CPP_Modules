#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cstdlib>
#include "phonebook.h"
#include "defines.h"

/**
 * formatting string for short output contacts
 * @param value string
 * @return formatted string
 */
std::string formatting_string(std::string value)
{
	std::string spaces =  " ";
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
 * method for print all contacts in command SEARCH
 */
void PhoneBook::printAllContact()
{
	std::string value;
	for (int counter = 0; counter < i; counter++)
	{
		std::cout <<  BOLD BLUE "_____________________________________________" STD << endl;
		std::cout
		<< right << setw(10)
		<< counter
		<< BOLD BLUE "|" STD
		<< formatting_string(contact[counter].getFirstName())
		<< BOLD BLUE "|" STD
		<< formatting_string(contact[counter].getLastName())
		<< BOLD BLUE "|" STD
		<< formatting_string(contact[counter].getNickname())
		<< BOLD BLUE "|" STD
		<< std::endl;
	}
}


void PhoneBook::printFullContact() {
	std::string value;
	const std::string messages[11] = {"First Name", "Second Name", "Nickname",
				 "Login", "Postal Address", "Email Address",
				 "Phone Number", "Birthday Date", "Favorite Meal",
				 "Underwear Color", "Darkest Secret"};
	Contact::getter get_methods[11] = {&Contact::getFirstName, &Contact::getLastName,
				   &Contact::getNickname, &Contact::getLogin, &Contact::getPostalAddress,
				   &Contact::getEmailAddress, &Contact::getPhoneNumber, &Contact::getBirthdayDate,
				   &Contact::getFavoriteMeal, &Contact::getUnderwearColor, &Contact::getDarkestSecret};

	std::cout << BLUE "\nWrite index for full information " << YELLOW "(⊙ヮ⊙)\n" << DARK_BLUE " ->: " STD;
	std::cin >> value;
	if ((value.find_first_not_of("1234567890") == string::npos) && !std::cin.eof())
	{
		stringstream geek(value);
		int x = 0;
		geek >> x;
		if (x >= 0 && x < 9 && x < i)
		{
			for (int counter = 0; counter < 11; counter++)
			{
				std::cout << left << setw(16) << messages[counter] << ":" ;
				std::cout <<  BOLD BLUE << (contact[x].*get_methods[counter])() << STD << std::endl;
			}
		} else
		{
			std::cout << RED << "Wrong index" << YELLOW " (ಠ╭╮ಠ)" STD << std::endl;
		}
	}
}

/**
 * method for add contact
 */
void PhoneBook::addContact()
{
	std::string value;
	const std::string messages[11] = {"First Name:", "Second Name:", "Nickname:",
				  "Login", "Postal Address:", "Email Address:",
				  "Phone Number:", "Birthday Date:", "Favorite Meal:",
				  "Underwear Color:", "Darkest Secret:"};
	Contact::setter set_methods[11] = {&Contact::setFirstName, &Contact::setLastName,
				   &Contact::setNickname, &Contact::setLogin, &Contact::setPostalAddress,
				   &Contact::setEmailAddress, &Contact::setPhoneNumber, &Contact::setBirthdayDate,
				   &Contact::setFavoriteMeal, &Contact::setUnderwearColor, &Contact::setDarkestSecret};
	if (i >= 8)
		std::cout << RED << "You have max numbers of contact" << YELLOW "୧( ಠ Д ಠ )୨" STD << std::endl;
	else
	{
		std::cout << GREEN "Please fill in the following fields" << YELLOW "(✿◠‿◠)" STD << std::endl;
		for (int counter = 0; counter < 11; counter++)
		{
			std::cout << messages[counter] << std::endl;
			std::cin >> value;
			(contact[i].*set_methods[counter])(value);
		}
		i++;
		std::cout << GREEN "You successful add new contact" << YELLOW "(ﾉ◕ヮ◕)ﾉ*:･ﾟ✧ " STD << std::endl;
	}
}

/**
 * endless function with wait commands & show little prompt
 * @param phoneBook - class witch all contacts
 */
void loop(PhoneBook phoneBook)
{
	std::string command;
	while(true)
	{
		std::cout << DARK_BLUE " ->: " STD;
		std::cin >> command;
		if (std::cin.eof())
			exit(0);
		if (command == "ADD")
		{
			phoneBook.addContact();
		}
		else if (command == "SEARCH")
		{
			phoneBook.printAllContact();
			phoneBook.printFullContact();
		} else if (command == "EXIT")
		{
			std::cout << DARK_BLUE "You lost all contacts. Bye!" << YELLOW "(ಥ﹏ಥ) "<< std::endl;
			exit(0);
		}
	}
}



int main ()
{
	PhoneBook phoneBook;

	std::cout <<
		"**************************************************************\n"
  		"*              Hello! This is a phone book."
  		<< YELLOW"(◕‿◕)" STD "             *\n"
		"*    -You can add new contact using the command       "
		BOLD BLUE "\"ADD\"  " STD "*\n"
		"*    -You can see all contacts using the command   "
		BOLD BLUE "\"SEARCH\"  " STD "*\n"
	 	"*    -You can close the phone book using the command "
   		BOLD BLUE"\"EXIT\"  " STD "*\n"
		"**************************************************************\n";
	loop(phoneBook);
}
