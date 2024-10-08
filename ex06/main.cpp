/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:02:55 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/08 18:52:27 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void filter(int i, Harl& harl)
{
	switch (i)
	{
		case 0:
			harl.complain("DEBUG");
			break;
		case 1:
			harl.complain("INFO");
			break;
		case 2:
			harl.complain("WARNING");
			break;
		case 3:
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

int main(int argc, char **argv)
{
	Harl harl;
	int i;
	
	if (argc != 2)
		return (std::cerr << "The program takes as parameter one of the four levels of Harl coments." << std::endl, 1);
	if (get_level(argv[1]) == 4)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	for (i = get_level(argv[1]); i < 4; i++)
		filter(i, harl);
	return (0);
}