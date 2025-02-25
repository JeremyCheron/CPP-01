/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 14:40:32 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/25 10:55:03 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int main(void)
{
	// Zombie zombie;
	std::cout << "Creating a stack zombie named Toto" << std::endl
		<< "it will be automatically deleted at the end of execution" << std::endl;
	Zombie zombie("Toto");
	zombie.announce();

	// Zombie in the stack
	std::cout << "Creating a stack zombie named stack" << std::endl
		<< "it will be automatically deleted because created in function scope" << std::endl;
	randomChump("stack");

	// Zombie announce

	// Zombie in the heap
	std::cout << "Creating a heap zombie named Heap" << std::endl
		<< "it will be manually deleted" << std::endl;
	Zombie *heap;
	heap = newZombie("Heap");
	heap->announce();
	delete(heap);

	std::cout << "Creating a heap zombie named Toto2" << std::endl
		<< "it will be automatically deleted at the end of execution" << std::endl;
	Zombie zombie2("Toto2");
	zombie2.announce();

	// Automatic delete of Wombie from the stack
}
