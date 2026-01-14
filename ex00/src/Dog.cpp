/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:36:17 by mcaro-ro          #+#    #+#             */
/*   Updated: 2026/01/14 14:42:22 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	type = "Dog";
	std::cout << "Dog default constructor." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	this->type = other.type;
	std::cout << "Dog copy constructor." << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	Animal::operator=(other);
	std::cout << "Dog copy assignment operator." << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructed." << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof! Woof!" << std::endl;
}
