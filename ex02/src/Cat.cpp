/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:36:17 by mcaro-ro          #+#    #+#             */
/*   Updated: 2026/01/15 12:34:55 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : brain(new Brain())
{
	type = "Cat";
	std::cout << "Cat default constructor." << std::endl;
}

Cat::Cat(const Cat& other) : AAnimal(other)
{
	this->type = other.type;
	brain = new Brain(*(other.brain));
	std::cout << "Cat copy constructor." << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		AAnimal::operator=(other);
		this->type = other.type;
		if (brain)
			delete brain;
		brain = new Brain(*(other.brain));
	}
	std::cout << "Cat copy assignment operator." << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	delete brain;
	std::cout << "Cat destructed." << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow! Meow!" << std::endl;
}

Brain*	Cat::getBrain(void) const
{
	return (brain);
}
