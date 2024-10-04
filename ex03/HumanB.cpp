/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 20:48:29 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/04 21:33:37 by nsouza-o         ###   ########.fr       */
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

void HumanB::setWeapon(Weapon Weapon)
{
	this->weapon = &Weapon;
}

void HumanB::attack()
{
	const std::string& weaponName = this->weapon->getType();
	std::cout << BOLD_YELLOW << this->name << " attacks with their " \
	<< BOLD_YELLOW << weaponName << RESET << std::endl;
}