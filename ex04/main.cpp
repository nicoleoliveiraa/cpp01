/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:29:00 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/10 15:07:18 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NewSed.hpp"

int main(int argc, char **argv)
{	
	NewSed myNewSed;
	
	if (argc != 4)
	{
		std::cerr << BOLD_RED << "Error: " << RESET << RED << \
		"This program requests three parameters in the following order: a filename and two strings, s1 and s2." \
		<< RESET << std::endl;
		return (0);
	}
	if (!myNewSed.openInfile(argv[1]))
		return (1);
	if (!myNewSed.openOutfile(argv[1]))
		return (1);
	myNewSed.replace(argv);
	return (0);
}