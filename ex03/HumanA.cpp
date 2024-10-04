/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 20:27:04 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/04 21:18:48 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon) : weapon(weapon)
{
	this->name = name;
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void HumanA::attack()
{
	const std::string& weaponName = this->weapon.getType();
	std::cout << BOLD_RED << this->name << " attacks with their " \
	<< BOLD_RED << weaponName << RESET << std::endl;
}