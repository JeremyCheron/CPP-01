/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:21:02 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/25 09:47:37 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	this->_name = name;
	this->_weapon = weapon;
}

HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
	std::cout
		<< RED
		<< this->_name
		<< " attacks with their "
		<< this->_weapon.getType()
		<< RESET
		<< std::endl;
}
