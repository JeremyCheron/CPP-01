/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 16:07:20 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/25 09:46:15 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <cstdlib>
#include <iostream>
#include "../includes/colors.hpp"

int main(void) {
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout
		<< GREEN "Adresse de brain : "
		<< &brain
		<< RESET
		<< std::endl;
	std::cout
		<< YELLOW "Adresse de stringPTR : "
		<< &stringPTR
		<< RESET
		<< std::endl;
	std::cout
		<< MAGENTA "Adresse de stringREF : "
		<< &stringREF
		<< RESET
		<< std::endl
		<< std::endl;

	std::cout
		<< GREEN "Contenu de brain : "
		<< brain
		<< RESET
		<< std::endl;
	std::cout
		<< YELLOW "Contenu de stringPTR : "
		<< *stringPTR
		<< RESET
		<< std::endl;
	std::cout
		<< MAGENTA "Contenu de stringREF : "
		<< stringREF
		<< RESET
		<< std::endl;
}
