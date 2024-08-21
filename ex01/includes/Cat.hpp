/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:43:29 by nsouchal          #+#    #+#             */
/*   Updated: 2024/08/01 13:51:47 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{
	private:
	Brain *brain;

	public:
	Cat();
	Cat(Cat const &src);
	Cat	&operator=(Cat const &rhs);
	virtual ~Cat();
	virtual void	makeSound() const;
};

#endif