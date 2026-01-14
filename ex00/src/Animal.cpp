/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:34:26 by mcaro-ro          #+#    #+#             */
/*   Updated: 2026/01/14 14:42:25 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << "Animal default constructor." << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type)
{
	std::cout << "Animal copy constructor." << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "Animal copy assignment operator." << std::endl;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructed." << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "* Generic animal sound *" << std::endl;
}
