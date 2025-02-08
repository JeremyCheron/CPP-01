/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onkeltag <onkeltag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:21:00 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/08 20:20:02 by onkeltag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon
{
private:
	std::string	_type;

public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	const std::string &getType(void) const;
	void setType(std::string type);
};
