/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 20:48:29 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/05 18:50:11 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
	return ;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void HumanB::setWeapon(Weapon& Weapon)
{
	this->weapon = &Weapon;
}

void HumanB::attack()
{
	if (this->weapon)
	{
		std::cout << BOLD_YELLOW << this->name << " attacks with their " \
		<< BOLD_YELLOW << this->weapon->getType() << RESET << std::endl;
	}
	else
	{
		std::cout << BOLD_RED << this->name << " has no weapon to attack with!" \
		<< RESET << std::endl;
	}
}