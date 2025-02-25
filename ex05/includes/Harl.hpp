/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 21:01:05 by onkeltag          #+#    #+#             */
/*   Updated: 2025/02/25 09:52:50 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include "colors.hpp"

class Harl
{
private:
	void _debug(void);
	void _info(void);
	void _warning(void);
	void _error(void);

public:
	Harl();
	~Harl();
	void complain(std::string level);

	static const std::string DEBUG_MSG;
	static const std::string INFO_MSG;
	static const std::string WARNING_MSG;
	static const std::string ERROR_MSG;
};
