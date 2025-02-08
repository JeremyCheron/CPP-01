/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onkeltag <onkeltag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 21:05:09 by onkeltag          #+#    #+#             */
/*   Updated: 2025/02/08 21:15:40 by onkeltag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

const std::string Harl::DEBUG_MSG = "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
const std::string Harl::INFO_MSG = "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
const std::string Harl::WARNING_MSG = "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.";
const std::string Harl::ERROR_MSG = "This is unacceptable. I want to speak to the manager now.";

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::_debug(void)
{
	std::cout << DEBUG_MSG << std::endl;
}

void Harl::_info(void)
{
	std::cout << INFO_MSG << std::endl;
}

void Harl::_warning(void)
{
	std::cout << WARNING_MSG << std::endl;
}

void Harl::_error(void)
{
	std::cout << ERROR_MSG << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*complaints[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*complaints[i])();
			return ;
		}
	}
}