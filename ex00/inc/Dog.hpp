/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:36:28 by mcaro-ro          #+#    #+#             */
/*   Updated: 2026/01/14 14:43:52 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:

		Dog(void);
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		~Dog(void);

		void	makeSound(void) const;
};

#endif
