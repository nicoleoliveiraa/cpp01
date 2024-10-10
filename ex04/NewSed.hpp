/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewSed.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:45:09 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/10 15:04:06 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEWSED_HPP
#define NEWSED_HPP

#include <iostream>
#include <fstream>
#include <string>

#define RESET       "\033[0m"
#define RED         "\033[31m"
#define BOLD_RED         "\033[1m\033[31m"

class NewSed
{
	private:
		std::ifstream inFile;
		std::ofstream outFile;
		std::string line;
		std::string outfileName;

	public:
		NewSed();
		~NewSed();
		bool openInfile(char *fileName);
		bool openOutfile(char *fileName);
		void replace(char **argv);
	
};

#endif