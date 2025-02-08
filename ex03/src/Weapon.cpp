/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onkeltag <onkeltag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:21:10 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/08 20:22:41 by onkeltag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType(void) const
{
	return this->_type;
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}
