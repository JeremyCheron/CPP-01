/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:23:23 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/07 15:36:08 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main(int ac, char **av) {
	if (ac == 3)
	{
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
