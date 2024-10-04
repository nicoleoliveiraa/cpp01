/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 20:08:24 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/04 20:52:42 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon {
private:
	std::string type;

public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	const std::string& getType() const;
	void setType(std::string type);
};

#endif // WEAPON_HPP