/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 20:24:02 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/05 14:20:41 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#define RESET       "\033[0m"
#define RED         "\033[31m"
#define BOLD_RED         "\033[1m\033[31m"

class HumanA {
private:
	Weapon& weapon;
	std::string name;
	HumanA();

public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void attack();
};

#endif // HUMANA_HPP