/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:36:17 by mcaro-ro          #+#    #+#             */
/*   Updated: 2026/01/14 14:42:18 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	type = "Cat";
	std::cout << "Cat default constructor." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	this->type = other.type;
	std::cout << "Cat copy constructor." << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	Animal::operator=(other);
	std::cout << "Cat copy assignment operator." << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructed." << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow! Meow!" << std::endl;
}
