/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:50:04 by mcaro-ro          #+#    #+#             */
/*   Updated: 2026/01/14 15:04:04 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "----- Constructor Test -----" << std::endl;
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	
	std::cout << "\n----- Basic Functionality Test -----" << std::endl;

	std::cout << "\n----- Get Type Test -----" << std::endl;
	std::cout << "Animal: " << meta->getType() << " " << std::endl;
	std::cout << "Dog: " << dog->getType() << " " << std::endl;
	std::cout << "Cat: " << cat->getType() << " " << std::endl;
	std::cout << "WrongAnimal: " << wrongAnimal->getType() << " " << std::endl;
	std::cout << "WrongCat: " << wrongCat->getType() << " " << std::endl;

	std::cout << "\n----- Sound Test -----" << std::endl;
	meta->makeSound();
	dog->makeSound();
	cat->makeSound();
	wrongAnimal->makeSound();
	wrongCat->makeSound();

	return (0);
}
