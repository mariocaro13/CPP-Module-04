/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:48:11 by mcaro-ro          #+#    #+#             */
/*   Updated: 2026/01/14 14:49:57 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	type = "WrongCat";
	std::cout << "WrongCat default constructor." << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	this->type = other.type;
	std::cout << "WrongCat copy constructor." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	WrongAnimal::operator=(other);
	std::cout << "WrongCat copy assignment operator." << std::endl;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructed." << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << " Meow? (but wrong)" << std::endl;
}
