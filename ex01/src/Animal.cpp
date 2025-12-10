/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 10:40:56 by nseon             #+#    #+#             */
/*   Updated: 2025/12/09 14:23:30 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"

Animal::Animal() : _type("Undefined animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const &model) : _type(model._type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &model)
{
	std::cout << "Animal copy assignement operator called" << std::endl;
	if (this != &model)
		_type = model._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor callled" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Undefined animal sound" << std::endl;
}

std::string Animal::getType() const
{
	return (_type);
}
