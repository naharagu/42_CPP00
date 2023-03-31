#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phonebook;
	std::string input = "";
	while (true)
	{
		phonebook.print_usage();
		std::cin >> input;
		if (std::cin.eof())
			break;
		if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.search_contact();
		else if (input == "EXIT")
		{
			phonebook.exit_contact();
			break;
		}
		else
			phonebook.print_error(input);
	}
	return (0);
}
