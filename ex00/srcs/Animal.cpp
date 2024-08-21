/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:47:48 by nsouchal          #+#    #+#             */
/*   Updated: 2024/08/13 14:36:34 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Copy Animal constructor called" << std::endl;
	*this = src;
}

Animal	&Animal::operator=(Animal const &rhs)
{
	std::cout << "Copy assignment Animal operator called" << std::endl;
	this->type = rhs.getType();
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	return ;
}