/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:47:48 by nsouchal          #+#    #+#             */
/*   Updated: 2024/08/13 14:54:43 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Default Dog constructor called" << std::endl;
	return ;
}

Dog::Dog(Dog const &src)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	*this = src;
	return ;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	std::cout << "Copy assignment Dog operator called" << std::endl;
	this->type = rhs.getType();
	delete this->brain;
	this->brain = new Brain(*rhs.brain);
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog Destructor called" << std::endl;
	return ;
}

void	Dog::makeSound() const
{
	std::cout << "Wouf WafWaf Wouf" << std::endl;
	return ;
}