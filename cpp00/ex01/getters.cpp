#include <iostream>
#include "phonebook.h"
using namespace std;

string Contact::getFirstName()
{
	return(this->firstName);
}

string Contact::getLastName()
{
	return(this->lastName);
}

string Contact::getNickname()
{
	return(this->nickname);
}

string Contact::getLogin()
{
	return(this->login);
}

string Contact::getPostalAddress()
{
	return(this->postalAddress);
}

string Contact::getEmailAddress()
{
	return(this->emailAddress);
}

string Contact::getPhoneNumber()
{
	return(this->phoneNumber);
}

string Contact::getBirthdayDate()
{
	return(this->phoneNumber);
}

string Contact::getFavoriteMeal()
{
	return(this->favoriteMeal);
}

string Contact::getUnderwearColor()
{
	return(this->underwearColor);
}

string Contact::getDarkestSecret()
{
	return(this->darkestSecret);
}


