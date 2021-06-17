
#ifndef PHONEBOOK_H
#define PHONEBOOK_H

using namespace std;

typedef struct t_contact
{
	string first_name;
	string last_name;
	string nickname;
	string login;
	string postal_address;
	string email_address;
	string phone_number;
	string birthday_date;
	string favorite_meal;
	string underwear_color;
	string darkest_secret;
}				s_contact;

class Phonebook{
private:
	t_contact contact[8]/*()*/;
public:
	void search(t_contact *contact);
};

void Phonebook::search(t_contact *contact)
{
	for (int i = 0; contact[i], i++)
	{
		cout << right << setw(10) << i << "|" << contact[i].first_name << "|"
		<< contact[i].last_name << "|" << contact[i].nickname;
	}
}

#endif
