#include "../includes/Phonebook.hpp"
#include "../includes/Contact.hpp"

bool	Phonebook::digitCheck(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
			return (false);
	}
	return (true);
}

void    Phonebook::add()
{
	std::string input;
	Contact contact;
	static int i = 0;

	std::cout << "Enter corresponsing information!" << std::endl;
	std::cout << std::endl;

	std::cout << "First Name: " << std::endl;
	std::cin >> input;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	contact.setFirstName(input);

	std::cout << "Last Name: " << std::endl;
	std::cin >> input;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	contact.setLastName(input);

	std::cout << "Nickname : " << std::endl;
	std::cin >> input;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	contact.setNickname(input);

	std::cout << "Phone Number: " << std::endl;
    while (1)
	{
		std::cin >> input;
    	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (!digitCheck(input))
		{
			std::cout << "Only numbers please!" << std::endl; 
			continue;
		}
		else
			break;
	}
    contact.setPhoneNumber(input);

	std::cout << "Darkest Secret: " << std::endl;
    std::getline(std::cin, input);
    contact.setSecret(input);

	if (i == 8)
		i = 0;
	contact.setIndex(i + 1);
	contact_list[i] =  contact;
	if (count < 8)
		count++;
	i++;
}

std::string	Phonebook::subString(std::string str)
{
	std::string trunc;
	if (str.length() > 10)
	{
		trunc = str.substr(0, 9) + ".";
		return (trunc);
	}
	else
		return (str);
}

void	Phonebook::search()
{
	int c = 0;
	int	index;
	std::cout << "List of contacts!" << std::endl;

	std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|     Index|" << "First name|" << " Last name|" << "  Nickname|" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;

	while (c < count)
	{
		std::cout << "|" << std::setw(10) << std::right << contact_list[c].getIndex() << "|";
		std::cout << std::setw(10) << std::right << subString(contact_list[c].getFirstName()) << "|";
		std::cout << std::setw(10) << std::right << subString(contact_list[c].getLastName()) << "|";
		std::cout << std::setw(10) << std::right << subString(contact_list[c].getNickname()) << "|" << std::endl;
		c++;
	}
	while (1)
	{
		std::cout << "Enter index to check further: ";
		std::cin >> index;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input, enter valid index please!" << std::endl;
			continue;
		}
		else if (index > count)
		{
			std::cout << "Invalid index! Try again!" << std::endl;
			continue;
		}
		std::cout << "First name: ";
		std::cout << contact_list[index - 1].getFirstName() << std::endl;
		std::cout << "Last name: ";
		std::cout << contact_list[index - 1].getLastName() << std::endl;
		std::cout << "Nickname: ";
		std::cout << contact_list[index - 1].getNickname() << std::endl;
		std::cout << "Phone number: ";
		std::cout << contact_list[index - 1].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: ";
		std::cout << contact_list[index - 1].getDark() << std::endl;
		break;
	}
}

Phonebook::Phonebook()
{
	count = 0;
}

Phonebook::~Phonebook()
{
}