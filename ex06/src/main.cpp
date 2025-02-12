/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onkeltag <onkeltag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 21:00:27 by onkeltag          #+#    #+#             */
/*   Updated: 2025/02/08 21:31:45 by onkeltag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int getLevel(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			return i;
	}
	return -1;
}

void harlSwitch(char *av, Harl &harl)
{
	int level = getLevel(av);
	switch (level)
	{
		case 0:
			harl.complain("DEBUG");
			break;
		case 1:
			harl.complain("INFO");
			break;
		case 2:
			harl.complain("WARNING");
			break;
		case 3:
			harl.complain("ERROR");
			break;
		default:
			std::cout << "Probably complaining about insignificant problems" << std::endl;
	}
}

int main (int ac, char **av)
{
	Harl harl;

	if (ac ==2)
		harlSwitch(av[1], harl);
	else
		std::cout << "Probably complaining about insignificant problems" << std::endl;
	return (0);
}