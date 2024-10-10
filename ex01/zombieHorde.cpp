/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:22:00 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/10 14:03:04 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int n, std::string name )
{
	Zombie* horde = new Zombie[n];

	for(int i = 0; i < n; ++i)
		horde[i].set_name(name);
	return (horde);
}
