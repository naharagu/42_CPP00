#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}

void PhoneBook::print_usage()
{
	std::cout << "\033[32m"
			  << "Please enter ADD or SEARCH or EXIT"
			  << "\033[m" << std::endl;
}

void PhoneBook::add_contact()
{
	std::cout << "welcome! please enter ADD or SEARCH or EXIT" << std::endl;
}

void PhoneBook::search_contact()
{
	std::cout << "welcome! please enter ADD or SEARCH or EXIT" << std::endl;
}

void PhoneBook::exit_contact()
{
	std::cout << "\033[32m"
			  << "Exit success! See you next time :)"
			  << "\033[m" << std::endl;
}

void PhoneBook::print_error(std::string &input)
{
	std::cerr << "\033[31m"
			  << "Error! [" << input << "] is not a valid command"
			  << "\033[m" << std::endl << std::endl;
}