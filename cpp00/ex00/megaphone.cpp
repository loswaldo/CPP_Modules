#include <iostream>


using namespace std;

string megaphone(string str)
{
	for(int i = 0; str[i]; i++)
	{
		str[i] = toupper(str[i]);
	}
	return str;
}

int main (int ac, char **av)
{
	if (ac == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	else
		for (int i = 1; av[i]; i++)
			cout << megaphone(av[i]) << " ";
}