#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	PhoneBook::num_contact = 0;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::print_usage() const
{
	std::cout << "\033[32m"
			  << "---Please enter ADD or SEARCH or EXIT---"
			  << "\033[m" << std::endl;
}

void PhoneBook::add_contact()
{
	if (num_contact > MAX_CONTACTS)
	{
		std::cout << "\033[32m"
				  << "PhoneBook is full. Replacing the oldest contact..."
				  << "\033[m" << std::endl
				  << std::endl;
	}
	num_contact++;
	contacts[num_contact % MAX_CONTACTS].register_contact();
}

void PhoneBook::search_contact() const
{
	if (num_contact == 0)
	{
		std::cout << "\033[31m"
				  << "PhoneBook is empty"
				  << "\033[m" << std::endl
				  << std::endl;
		return;
	}
	preview_phonebook();
	unsigned int index = get_num_contact();
	contacts[index].print_contact();
}

void PhoneBook::exit_contact() const
{
	std::cout << "\033[32m"
			  << "Exit success! See you next time :)"
			  << "\033[m" << std::endl;
}

unsigned int PhoneBook::get_num_contact() const
{
	std::string input = "";

	while (true)
	{
		std::cout << "\033[32m"
				  << "Enter the index of the contact you want to see: "
				  << "\033[m";
		std::cin >> input;
		if (std::cin.eof())
			break;
		if (input.length() == 1 && input[0] >= '1' && input[0] <= '8')
		{
			unsigned int input_index = input[0] - '0';
			if (1 <= input_index && input_index <= num_contact)
				return (input[0] - '0');
			else
				std::cout << "\033[31m"
						  << "Error! There is no contact with index " << input[0] - '0'
						  << "\033[m" << std::endl;
		}
		else
			std::cout << "\033[31m"
					  << "Error! [" << input << "] is not a valid index"
					  << "\033[m" << std::endl;
	}
	return (num_contact);
}

void PhoneBook::preview_phonebook() const
{
	std::cout << "index|     first|      last|  nickname|" << std::endl;
	for (unsigned int i = 1; i <= MAX_CONTACTS; i++)
	{
		contacts[i].preview_contact(i);
	}
	std::cout << std::endl;
}

void PhoneBook::print_error(std::string &input) const
{
	std::cout << "\033[31m"
			  << "Error! [" << input << "] is not a valid command"
			  << "\033[m" << std::endl
			  << std::endl;
}