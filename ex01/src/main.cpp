/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:50:04 by mcaro-ro          #+#    #+#             */
/*   Updated: 2026/01/14 15:43:01 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    std::cout << "----- Array of Animals -----" << std::endl;
    const int size = 4;
    Animal* animals[size];

    for (int i = 0; i < size / 2; i++)
        animals[i] = new Dog();
    for (int i = size / 2; i < size; i++)
        animals[i] = new Cat();

    std::cout << "\n----- Sounds -----" << std::endl;
    for (int i = 0; i < size; i++)
        animals[i]->makeSound();

    std::cout << "\n----- Deleting Animals -----" << std::endl;
    for (int i = 0; i < size; i++)
        delete animals[i];

    std::cout << "\n----- Deep Copy Test -----" << std::endl;
    Dog dog1;
    dog1.getBrain()->setIdea(0, "Chase the ball!");
    Dog dog2 = dog1;
    std::cout << "Dog1 idea[0]: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2 idea[0]: " << dog2.getBrain()->getIdea(0) << std::endl;

    dog2.getBrain()->setIdea(0, "Eat food!");
    std::cout << "Dog1 idea[0] after Dog2 change: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2 idea[0] after change: " << dog2.getBrain()->getIdea(0) << std::endl;

    return 0;
}
