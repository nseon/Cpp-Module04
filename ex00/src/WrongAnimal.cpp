/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 10:40:56 by nseon             #+#    #+#             */
/*   Updated: 2025/12/09 09:33:19 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Wrong undefined animal")
{
	std::cout << "WrongAnimal default constructor callled" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &model) : _type(model._type)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &model)
{
	std::cout << "WrongAnimal copy assignement operator called" << std::endl;
	if (this != &model)
		_type = model._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor callled" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Undefined wrong animal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (_type);
}
