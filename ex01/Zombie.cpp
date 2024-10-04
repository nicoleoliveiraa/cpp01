/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:22:43 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/04 18:33:52 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	return ;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << RED << this->name << " finally died! 😵" \
	<< RESET << std::endl;
}

void Zombie::announce()
{
	std::cout << BOLD_GREEN << this->name << BOLD_WHITE << " 🧟: BraiiiiiiinnnzzzZ..." \
	<< RESET << std::endl;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}