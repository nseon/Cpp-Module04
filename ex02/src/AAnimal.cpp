/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 10:40:56 by nseon             #+#    #+#             */
/*   Updated: 2025/12/03 12:21:40 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("Undefined animal")
{
	std::cout << "Animal default constructor callled" << std::endl;
}

AAnimal::AAnimal(AAnimal const &model) : _type(model._type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &model)
{
	std::cout << "Animal copy assignement operator called" << std::endl;
	if (this != &model)
		_type = model._type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "Animal destructor callled" << std::endl;
}

void AAnimal::makeSound() const
{
	std::cout << "Undefined animal sound" << std::endl;
}

std::string AAnimal::getType() const
{
	return (_type);
}
