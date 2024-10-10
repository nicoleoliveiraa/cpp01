/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewSed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:47:53 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/10 15:14:34 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NewSed.hpp"

NewSed::NewSed()
{
	return ;
}

NewSed::~NewSed()
{
	return ;
}

bool NewSed::openInfile(char *fileName)
{
	this->inFile.open(fileName);
	if (!this->inFile.good())
	{
		std::cerr << BOLD_RED << "Error: " << RESET << RED \
		<< "Can't open inFile." << RESET << std::endl;
		return (false);
	}
	return (true);
}

bool NewSed::openOutfile(char *fileName)
{
	std::string line;
	
	getline(this->inFile, line);
	if (line.length() == 0)
	{
		inFile.close();
		return (false);
	}
	this->outfileName = fileName;
	this->outfileName = this->outfileName + ".replace";
	this->outFile.open(this->outfileName.c_str(), std::ios::out | std::ios::trunc);
	if (!this->outFile.good())
	{
		std::cerr << BOLD_RED << "Error: " << RESET << RED \
		<< "Can't open outFile." << std::endl;
		return (false);
	}
	return (true);
}

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

void NewSed::replace(char **argv)
{
	std::string src;
	std::string replace;

	this->inFile.clear();
	this->inFile.seekg(0, std::ios::beg);
	src = argv[2];
	replace = argv[3];
	while (getline(this->inFile, this->line))
	{
		replaceAndWrite(this->line, src, replace, this->outFile);
		if (!this->inFile.eof())
			this->outFile << std::endl;
	}
	this->inFile.close();
	this->outFile.close();
}
