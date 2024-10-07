/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 20:46:45 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/05 14:17:37 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#define RESET       "\033[0m"
#define BLACK       "\033[30m"
#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define BLUE        "\033[34m"
#define MAGENTA     "\033[35m"
#define CYAN        "\033[36m"
#define WHITE       "\033[37m"

#define BOLD_BLACK       "\033[1m\033[30m"
#define BOLD_RED         "\033[1m\033[31m"
#define BOLD_GREEN       "\033[1m\033[32m"
#define BOLD_YELLOW      "\033[1m\033[33m"
#define BOLD_BLUE        "\033[1m\033[34m"
#define BOLD_MAGENTA     "\033[1m\033[35m"
#define BOLD_CYAN        "\033[1m\033[36m"
#define BOLD_WHITE       "\033[1m\033[37m"

class HumanB {
private:
	Weapon* weapon;
	std::string name;
	HumanB();

public:
	HumanB(std::string name);
	~HumanB();
	void setWeapon(Weapon& Weapon);
	void attack();
};

#endif // HUMANB_HPP