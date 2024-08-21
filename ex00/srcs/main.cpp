/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 13:32:59 by nsouchal          #+#    #+#             */
/*   Updated: 2024/07/31 14:25:46 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal*		meta = new Animal();
	const WrongAnimal*	something = new WrongAnimal();
	const Animal*		j = new Dog();
	const Animal*		i = new Cat();
	const WrongAnimal*	k = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	k->makeSound();
	something->makeSound();
	meta->makeSound();
	delete(meta);
	delete(something);
	delete(i);
	delete(j);
	delete(k);
	return 0;
}