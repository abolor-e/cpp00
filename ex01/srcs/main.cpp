#include "../includes/Phonebook.hpp"
#include "../includes/Contact.hpp"


int main(void)
{
	std::string input;
	Phonebook phonebook;

	while (1)
	{
		std::cout << std::endl;
		std::cout << "Welcome to the Phonebook system choose one of the options below!" << std::endl;
		std::cout << "(It is enough to write the number corresponding to the option!)" << std::endl;
		std::cout << std::endl;
		std::cout << "1. ADD" << std::endl;
		std::cout << "2. SEARCH" << std::endl;
		std::cout << "3. EXIT" << std::endl;
		std::cout << std::endl;
		std::cout << "Enter option number: ";
		std::cin >> input;
		if (std::atoi(input.c_str()) == 1)
		{
			phonebook.add();
			continue;
		}
		else if (std::atoi(input.c_str()) == 2)
		{
			phonebook.search();
			continue;
		}
		else if (std::atoi(input.c_str()) == 3)
		{
			std::cout << "Thank you for using the phonebook system, see you later!" << std::endl;
			break;
		}
		else
			std::cout << "Non valid input check the input again!" << std::endl;
	}
}