/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 10:21:00 by nseon             #+#    #+#             */
/*   Updated: 2025/12/03 12:23:45 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal	animal;
	Cat		cat;
	Dog		dog;

	std::cout << std::endl << "Type :" << animal.getType() << "\nSound: "; 
	animal.makeSound();
	std::cout << std::endl << "Type :" << cat.getType() << "\nSound: "; 
	cat.makeSound();
	std::cout << std::endl << "Type :" << dog.getType() << "\nSound: "; 
	dog.makeSound();
	std::cout << std::endl;

	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	
	delete meta;
	delete i;
	delete j;
	return (0);
}
