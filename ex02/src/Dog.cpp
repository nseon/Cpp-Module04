/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:15:35 by nseon             #+#    #+#             */
/*   Updated: 2025/12/10 12:40:37 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Dog.hpp"

Dog::Dog() : AAnimal(), _brain(new Brain())
{
	std::cout << "Dog default constructor called" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog &model) : _brain(new Brain(*model._brain))
{
	std::cout << "Dog copy constructor called" << std::endl;
	_type = model._type;
}

Dog &Dog::operator=(const Dog &model)
{
	std::cout << "Dog copy assignement called" << std::endl;
	if (this != &model)
	{
		_type = model._type;
		*_brain = *model._brain;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

void Dog::makeSound() const
{
	std::cout << "Dog sound" << std::endl;
}
