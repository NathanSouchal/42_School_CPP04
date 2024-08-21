/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:43:29 by nsouchal          #+#    #+#             */
/*   Updated: 2024/07/31 13:57:09 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <cstring>

class	WrongAnimal
{
	protected:
	std::string	type;

	public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &src);
	WrongAnimal	&operator=(WrongAnimal const &rhs);
	~WrongAnimal();
	std::string	getType(void) const;
	void		makeSound() const;
};

#endif