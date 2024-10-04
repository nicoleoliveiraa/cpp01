/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:35:19 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/04 16:24:31 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie myZombie(name);
	
	myZombie.announce();
}

Zombie* newZombie(std::string name)
{
	Zombie* myZombie = new Zombie(name);
	return (myZombie);
}

int main()
{
	Zombie* myZombie = newZombie("jooooo");

	randomChump("Sooooooo");
	myZombie->announce();
	delete myZombie;
	return (0);
}