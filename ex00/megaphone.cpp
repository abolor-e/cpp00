#include <iostream>
#include <cstring>
#include <cctype>

int main(int ac, char **av)
{
	int	i = 1;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (i < ac)
	{
		int a = 0;
		while (a < (int)strlen(av[i]))
		{
			std::cout << (char)toupper(av[i][a]);
			a++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}