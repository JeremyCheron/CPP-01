/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 20:32:42 by onkeltag          #+#    #+#             */
/*   Updated: 2025/02/25 09:51:38 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/sed.hpp"

static void replaceStrings(
	std::ofstream &fileOut,
	const std::string s1,
	const std::string s2,
	const std::string buff)
{
	size_t pos = buff.find(s1);
	size_t to_skip;

	if (pos == std::string::npos)
	{
		fileOut << buff;
		return ;
	}
	else
	{
		fileOut << buff.substr(0, pos);
		fileOut << s2;
		to_skip = pos + s1.length();
		replaceStrings(fileOut, s1, s2, buff.substr(to_skip));
	}
}


int main (int ac, char **av)
{
	if (ac != 4)
		return (
			std::cout
				<< RED "Usage: ./sed <filename> <s1> <s2>" RESET
				<< std::endl, 1);
	else
		{
			std::string file = av[1];
			std::string s1 = av[2];
			std::string s2 = av[3];
			std::string buff;
			std::ifstream fileIn;
			std::ofstream fileOut;

			file = av[1];
			fileIn.open(file.c_str());
			if (fileIn.good() == false)
				return (
					std::cout
					<< RED "Error: input file not found" RESET
					<< std::endl,
					1);
			fileOut.open((file + ".replace").c_str());
			if (fileOut.good() == false)
			{
				fileIn.close();
				return (
					std::cout
						<< RED "Error: output file not found" RESET
						<< std::endl,
						1);
			}
			while (getline(fileIn, buff))
				replaceStrings(fileOut, s1, s2, buff + '\n');
			return (fileIn.close(), fileOut.close(), 0);
		}
}
