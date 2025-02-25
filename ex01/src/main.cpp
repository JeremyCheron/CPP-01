/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:23:23 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/25 09:42:49 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main(int ac, char **av) {
	if (ac == 3)
	{
		std::cout
			<< YELLOW "Creating a horde of "
			<< av[1] << " zombies named "
			<< av[2]
			<< RESET
			<< std::endl;
		int hordeSize = std::atoi(av[1]);
		Zombie *horde = zombieHorde(hordeSize , av[2]);
		for (int i = 0; i < hordeSize; i++) {
			horde[i].announce();
		}
		delete [] horde;
	}
	else
		std::cout << "Syntaxe: ./brainz <nombre> <nom>" << std::endl;
}
