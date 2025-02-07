/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 16:07:20 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/07 16:22:41 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <cstdlib>
#include <iostream>

int main(void) {
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "Adresse de brain : " << &brain << std::endl;
	std::cout << "Adresse de stringPTR : " << &stringPTR << std::endl;
	std::cout << "Adresse de stringREF : " << &stringREF << std::endl;

	std::cout << "Contenu de brain : " << brain << std::endl;
	std::cout << "Contenu de stringPTR : " << *stringPTR << std::endl;
	std::cout << "Contenu de stringREF : " << stringREF << std::endl;
}
