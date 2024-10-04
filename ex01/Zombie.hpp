/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:16:42 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/04 18:33:05 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

/* Colors */
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define BOLD_GREEN   "\033[1;32m"
#define BOLD_WHITE   "\033[1;37m"

class Zombie {
private:
	std::string name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce( void );
	void set_name(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif // ZOMBIE_HPP