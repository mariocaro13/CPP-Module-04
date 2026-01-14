/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:32:23 by mcaro-ro          #+#    #+#             */
/*   Updated: 2026/01/14 14:43:55 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
	protected:
		std::string	type;

	public:

		Animal(void);
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		~Animal(void);

		std::string		getType(void) const;
		virtual void	makeSound(void) const;
};

#endif
