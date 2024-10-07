/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:29:00 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/07 16:31:58 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

#define RESET       "\033[0m"
#define RED         "\033[31m"
#define BOLD_RED         "\033[1m\033[31m"

void replaceAndWrite(std::string line, std::string src, std::string replace, std::ofstream& outFile)
{
	size_t pos;
	std::string strAux;
	
	while ((pos = line.find(src)) != std::string::npos)
	{
		strAux = line.substr(0, pos);
		strAux = strAux + replace;
		outFile << strAux;
		line = line.substr(pos + src.length());
	}
	outFile << line;
}

int main(int argc, char **argv)
{
	std::ifstream inFile;
	std::ofstream outFile;
	std::string line;
	std::string outfileName;
	std::string src;
	std::string replace;
	
	if (argc != 4)
	{
		std::cerr << BOLD_RED << "Error: " << RESET << RED << \
		"This program requests three parameters in the following order: a filename and two strings, s1 and s2." \
		<< RESET << std::endl;
		return (0);
	}
	inFile.open(argv[1]);
	if (!inFile.good())
	{
		std::cerr << BOLD_RED << "Error: " << RESET << RED \
		<< "Can't open inFile." << std::endl;
		return (1);
	}
	outfileName = argv[1];
	outfileName = outfileName + ".replace";
	outFile.open(outfileName.c_str(), std::ios::out | std::ios::trunc);
	if (!outFile.good())
	{
		std::cerr << BOLD_RED << "Error: " << RESET << RED \
		<< "Can't open outFile." << std::endl;
		return (1);
	}
	src = argv[2];
	replace = argv[3];
	while (getline(inFile, line))
	{
		replaceAndWrite(line, src, replace, outFile);
		outFile << std::endl;
	}
	inFile.close();
	outFile.close();
	return (0);
}