/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:43:29 by nsouchal          #+#    #+#             */
/*   Updated: 2024/08/02 10:53:47 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <cstring>

class	Animal
{
	protected:
	std::string	type;

	public:
	Animal();
	Animal(Animal const &src);
	Animal	&operator=(Animal const &rhs);
	virtual ~Animal();
	std::string			getType(void) const;
	virtual void		makeSound() const = 0;
};

#endif