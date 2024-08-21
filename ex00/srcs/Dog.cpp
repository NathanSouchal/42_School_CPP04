/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:47:48 by nsouchal          #+#    #+#             */
/*   Updated: 2024/07/31 13:48:19 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
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
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	return ;
}

void	Dog::makeSound() const
{
	std::cout << "Wouf WafWaf Wouf" << std::endl;
	return ;
}