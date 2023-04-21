#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;

public:
	Contact();
	~Contact();
	void preview_contact(unsigned int index) const;
	void print_contact(unsigned int index) const;
	void register_contact();
	std::string register_item(std::string str);
	std::string compress_to_10(std::string str) const;
};

#endif
