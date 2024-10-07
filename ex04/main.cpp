/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:29:00 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/07 11:29:43 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	std::ifstream inFile;
	std::ofstream outFile;
	std::string line;
	
	if (argc != 4)
		return (0);
	inFile.open("text");
	if (!inFile.good())
	{
		std::cerr << "Error: Can't open inFile." << std::endl;
		return (1);
	}
	while (getline(inFile, line))
		replaceAndWrite(line)
}