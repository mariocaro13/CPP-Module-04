/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:36:17 by mcaro-ro          #+#    #+#             */
/*   Updated: 2026/01/14 15:38:39 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : brain(new Brain())
{
	type = "Dog";
	std::cout << "Dog default constructor." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	this->type = other.type;
	this->brain = new Brain(*(other.brain));
	std::cout << "Dog copy constructor." << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		type = other.type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*(other.brain));
	}
	std::cout << "Dog copy assignment operator." << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "Dog destructed." << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof! Woof!" << std::endl;
}

Brain*	Dog::getBrain(void) const
{
	return (this->brain);
}
