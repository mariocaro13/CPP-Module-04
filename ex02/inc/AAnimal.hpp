/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:32:23 by mcaro-ro          #+#    #+#             */
/*   Updated: 2026/01/15 12:30:50 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>
# include <iostream>

class AAnimal
{
	protected:
		std::string	type;

	public:

		AAnimal(void);
		AAnimal(const AAnimal& other);
		AAnimal& operator=(const AAnimal& other);
		virtual ~AAnimal(void);

		std::string		getType(void) const;
		virtual void	makeSound(void) const = 0;
};

#endif
