/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:41:38 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/08 12:15:11 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	return ;
}

Harl::~Harl()
{
	return ;
}

void Harl::_debug()
{
	std::cout << BOLD_GREEN << "[DEBUG]: " << RESET; 
	std::cout << BOLD_WHITE << "I love having extra bacon for my 7XL-double-cheese-triple";
	std::cout << "-pickle-special-ketchup burger. I really do!" << RESET << std::endl;
}

void Harl::_info()
{
	std::cout << BOLD_BLUE << "[INFO]: " << RESET; 
	std::cout << BOLD_WHITE << "I cannot believe adding extra bacon costs more money. You";
	std::cout << "didn’t put enough bacon in my burger! If you did, I wouldn’t be asking";
	std::cout << "for more!" << RESET << std::endl;
}

void Harl::_warning()
{
	std::cout << BOLD_YELLOW << "[WARNING]: " << RESET; 
	std::cout << BOLD_WHITE << "I think I deserve to have some extra bacon for free. I’ve";
	std::cout << "been coming for years whereas you started working here since last month.";
	std::cout << RESET << std::endl;
}

void Harl::_error()
{
	std::cout << BOLD_RED << "[ERROR]: " << RESET; 
	std::cout << BOLD_WHITE << "This is unacceptable! I want to speak to the manager now.";
	std::cout << RESET << std::endl;
}

int get_level(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for(int i = 0; i < 4; i++)
	{
		if (!level.compare(levels[i]))
			return (i);
	}
	return (4);
}

void Harl::complain(std::string level)
{
	const HarlMemFn levels[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	int	i = get_level(level);
	
	if (i < 4)
		(this->*levels[i])();
	else
		std::cout << RED << "Invalid complain!" << RESET << std::endl;
}