/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 14:40:32 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/25 09:39:50 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int main(void)
{
	// Zombie zombie;
	Zombie zombie("Toto");

	// Zombie in the stack
	randomChump("stack");

	// Zombie announce
	zombie.announce();

	// Zombie in the heap
	Zombie *heap;
	heap = newZombie("Heap");
	heap->announce();
	delete(heap);

	Zombie zombie2("Toto2");
	zombie2.announce();

	// Automatic delete of Wombie from the stack
}
