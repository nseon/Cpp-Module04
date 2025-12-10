/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 10:21:00 by nseon             #+#    #+#             */
/*   Updated: 2025/12/10 12:43:33 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const AAnimal *list[20];
	
	for (int i = 0; i < 20; i++)
	{
		if (i < 10)
			list[i] = new Dog;
		else
			list[i] = new Cat;
	}
	for (int i = 0; i < 20; i++)
		delete list[i];
	std::cout << std::endl;
	
	Cat cat;
	Cat cat2(cat);
	cat = cat2;
	AAnimal *a = new Dog;
	std::cout << a->getType() << std::endl;
	*a = cat;
	std::cout << a->getType() << std::endl;
	delete a;
	return (0);
}
