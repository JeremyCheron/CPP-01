/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 14:36:22 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/25 09:41:40 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout
		<< RED
		<< this->getName()
		<< ": died" RED
		<< std::endl;
}

std::string Zombie::getName(void) const {
	return this->_name;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout
		<< GREEN
		<< this->getName()
		<< ": " ANNOUNCE GREEN
		<< std::endl;
}
