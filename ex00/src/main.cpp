/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 14:40:32 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/07 15:08:45 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int main(void)
{
	Zombie zombie("Toto");

	randomChump("stack");

	zombie.announce();

	Zombie *heap;

	heap = newZombie("Heap");
	heap->announce();
	delete(heap);
}
