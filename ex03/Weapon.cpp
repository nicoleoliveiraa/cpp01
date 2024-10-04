/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 20:12:15 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/04 20:52:23 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	return ;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
	return ;
}

Weapon::~Weapon()
{
	return ;
}

const std::string& Weapon::getType() const
{
	const std::string& type = this->type;
	return (type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}