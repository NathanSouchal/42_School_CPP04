/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:31:41 by nsouchal          #+#    #+#             */
/*   Updated: 2024/08/01 13:48:51 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	ideas = new std::string[100];
	std::cout << "Brain default constructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Copy Brain constructor called" << std::endl;
	*this = src;
	return ;
}

Brain	&Brain::operator=(const Brain &rhs)
{
	std::cout << "Copy assignment Brain operator called" << std::endl;
	this->ideas = rhs.getIdeas();
	return (*this);
}

Brain::~Brain()
{
	delete[] ideas;
	std::cout << "Brain Destructor called" << std::endl;
	return ;
}

std::string	*Brain::getIdeas(void) const
{
	return (this->ideas);
}