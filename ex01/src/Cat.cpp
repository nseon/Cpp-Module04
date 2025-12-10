/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:15:48 by nseon             #+#    #+#             */
/*   Updated: 2025/12/09 14:25:01 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cat.hpp"

Cat::Cat() : _brain(new Brain())
{
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat &model) : _brain(new Brain(*model._brain))
{
	std::cout << "Cat copy constructor called" << std::endl;
	_type = model._type;
}

Cat &Cat::operator=(const Cat &model)
{
	std::cout << "Cat copy assignement operator called" << std::endl;
	if (this != &model)
	{
		_type = model._type;
		*_brain = *model._brain;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

void Cat::makeSound() const
{
	std::cout << "Cat sound" << std::endl;
}
