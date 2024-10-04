/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:53:56 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/04 19:44:38 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define RESET       "\033[0m"
#define RED         "\033[31m"
#define YELLOW      "\033[33m"
#define BOLD_RED         "\033[1m\033[31m"

int main()
{
	std::string str("HI THIS IS BRAIN");
	std::string* strPTR = &str;
	std::string& strREF = str;

	std::cout << YELLOW << "The memory address of the string variable: " << BOLD_RED \
	<< &str << RESET << std::endl;
	std::cout << YELLOW << "The memory address held by stringPTR: " << BOLD_RED \
	<< strPTR << RESET << std::endl;
	std::cout << YELLOW << "The memory address held by stringREF: " << BOLD_RED \
	<< &strREF << RESET << std::endl;
	std::cout << RED << "And then:" << RESET << std::endl;
	std::cout << YELLOW << "The value of the string variable: " << BOLD_RED \
	<< str << RESET << std::endl;
	std::cout << YELLOW << "The value pointed to by stringPTR: " << BOLD_RED \
	<< *strPTR << RESET << std::endl;
	std::cout << YELLOW << "The value pointed to by stringREF: " << BOLD_RED \
	<< strREF << RESET << std::endl;
	return (0);
}