#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

using namespace std;

class Contact
{
private:
	string firstName;
	string lastName;
	string nickname;
	string login;
	string postalAddress;
	string emailAddress;
	string phoneNumber;
	string birthdayDate;
	string favoriteMeal;
	string underwearColor;
	string darkestSecret;
public:
	Contact();

	void setFirstName(string value);
	void setLastName(string value);
	void setNickname(string value);
	void setLogin(string value);
	void setPostalAddress(string value);
	void setBirthdayDate(string value);
	void setEmailAddress(string value);
	void setPhoneNumber(string value);
	void setFavoriteMeal(string value);
	void setUnderwearColor(string value);
	void setDarkestSecret(string value);

	typedef void(Contact::*setter)(string);
	static setter set_methods[12];

	string getFirstName();
	string getLastName();
	string getNickname();
	string getLogin();
	string getBirthdayDate();
	string getPostalAddress();
	string getEmailAddress();
	string getPhoneNumber();
	string getFavoriteMeal();
	string getUnderwearColor();
	string getDarkestSecret();

	typedef string (Contact::*getter)();
	static getter get_methods[12];
};

#endif