/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 20:12:15 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/05 14:02:05 by nsouza-o         ###   ########.fr       */
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
	return (this->type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}