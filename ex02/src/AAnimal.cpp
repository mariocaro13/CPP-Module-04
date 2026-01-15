/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 12:31:20 by mcaro-ro          #+#    #+#             */
/*   Updated: 2026/01/15 12:32:01 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : type("AAnimal")
{
	std::cout << "AAnimal default constructor." << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) : type(other.type)
{
	std::cout << "AAnimal copy constructor." << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "AAnimal copy assignment operator." << std::endl;
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructed." << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return (this->type);
}

