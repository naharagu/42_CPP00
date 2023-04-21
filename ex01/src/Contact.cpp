#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

std::string Contact::compress_to_10(std::string str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
}

void Contact::preview_contact(unsigned int index) const
{
	if (first_name.empty() || last_name.empty() || nick_name.empty())
		return;
	std::cout << std::setw(5) << index << "|";
	std::cout << std::setw(10) << compress_to_10(first_name) << "|";
	std::cout << std::setw(10) << compress_to_10(last_name) << "|";
	std::cout << std::setw(10) << compress_to_10(nick_name) << "|" << std::endl;
}

void Contact::print_contact(unsigned int index) const
{
	if (first_name.empty() || last_name.empty() || nick_name.empty())
		return;
	std::cout << "index:          " << index << std::endl;
	std::cout << "first name:     " << first_name << std::endl;
	std::cout << "last name:      " << last_name << std::endl;
	std::cout << "nick name:      " << nick_name << std::endl;
	std::cout << "phone number:   " << phone_number << std::endl;
	std::cout << "darkest secret: " << darkest_secret << std::endl;
	std::cout << std::endl;
}

std::string Contact::register_item(std::string str)
{
	std::string input = "";

	std::cout << str << ": ";
	std::cin >> input;
	return (input);
}

void Contact::register_contact()
{
	first_name = register_item("first name");
	last_name = register_item("last name");
	nick_name = register_item("nick name");
	phone_number = register_item("phone number");
	darkest_secret = register_item("darkest secret");
}