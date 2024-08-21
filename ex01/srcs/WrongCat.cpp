/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:47:48 by nsouchal          #+#    #+#             */
/*   Updated: 2024/07/31 14:12:18 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "Default WrongCat constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const &src)
{
	std::cout << "Copy WrongCat constructor called" << std::endl;
	*this = src;
	return ;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	std::cout << "Copy assignment WrongCat operator called" << std::endl;
	this->type = rhs.getType();
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
	return ;
}

void	WrongCat::makeSound() const
{
	std::cout << "*wrong caat sound*" << std::endl;
	return ;
}