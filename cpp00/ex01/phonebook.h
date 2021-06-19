
#ifndef PHONEBOOK_H
#define PHONEBOOK_H

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
};



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
	void printContact();
};




#endif
