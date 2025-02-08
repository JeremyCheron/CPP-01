/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onkeltag <onkeltag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:20:55 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/08 20:21:04 by onkeltag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon &_weapon;

public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack(void);
};