/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:39:44 by mcaro-ro          #+#    #+#             */
/*   Updated: 2026/01/14 14:43:49 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:

		Cat(void);
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		~Cat(void);

		void	makeSound(void) const;
};

#endif
