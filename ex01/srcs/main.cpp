/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 13:32:59 by nsouchal          #+#    #+#             */
/*   Updated: 2024/08/13 14:13:31 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Animal	*array[10];
	for (int i = 0; i < 10; i++)
	{
		array[i++] = new Dog();
		array[i] = new Cat();
	}
	for (int j = 0; j < 10; j++)
	{
		array[j]->makeSound();
		delete (array[j]);
	}
	return (0);
}