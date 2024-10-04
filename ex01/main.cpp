/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 16:48:35 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/04 18:39:32 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int nbrOfZumbies = 7;
	Zombie* myHorde = zombieHorde(nbrOfZumbies, "Mortis");

	for(int i = 0; i < nbrOfZumbies; ++i)
		myHorde[i].announce();
	delete[] myHorde;
}
