/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:43:29 by nsouchal          #+#    #+#             */
/*   Updated: 2024/08/01 13:52:19 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal
{
	private:
	Brain *brain;
	
	public:
	Dog();
	Dog(Dog const &src);
	Dog	&operator=(Dog const &rhs);
	virtual ~Dog();
	virtual void	makeSound() const;
};

#endif