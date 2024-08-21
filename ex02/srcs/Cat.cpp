/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:47:48 by nsouchal          #+#    #+#             */
/*   Updated: 2024/08/13 14:54:39 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Default Cat constructor called" << std::endl;
	return ;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	*this = src;
	return ;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	std::cout << "Copy assignment Cat operator called" << std::endl;
	this->type = rhs.getType();
	delete this->brain;
	this->brain = new Brain(*rhs.brain);
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat Destructor called" << std::endl;
	return ;
}

void	Cat::makeSound() const
{
	std::cout << "Miaouuuuuu mia mia miaouuu" << std::endl;
	return ;
}