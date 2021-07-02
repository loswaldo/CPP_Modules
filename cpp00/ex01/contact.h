#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

using namespace std;

class Contact
{
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string login;
	std::string postalAddress;
	std::string emailAddress;
	std::string phoneNumber;
	std::string birthdayDate;
	std::string favoriteMeal;
	std::string underwearColor;
	std::string darkestSecret;
public:
	Contact();

	void setFirstName(std::string value);
	void setLastName(std::string value);
	void setNickname(std::string value);
	void setLogin(std::string value);
	void setPostalAddress(std::string value);
	void setBirthdayDate(std::string value);
	void setEmailAddress(std::string value);
	void setPhoneNumber(std::string value);
	void setFavoriteMeal(std::string value);
	void setUnderwearColor(std::string value);
	void setDarkestSecret(std::string value);

	typedef void(Contact::*setter)(std::string);
	static setter set_methods[12];

	std::string getFirstName();
	std::string getLastName();
	std::string getNickname();
	std::string getLogin();
	std::string getBirthdayDate();
	std::string getPostalAddress();
	std::string getEmailAddress();
	std::string getPhoneNumber();
	std::string getFavoriteMeal();
	std::string getUnderwearColor();
	std::string getDarkestSecret();

	typedef std::string (Contact::*getter)();
	static getter get_methods[12];
};

#endif