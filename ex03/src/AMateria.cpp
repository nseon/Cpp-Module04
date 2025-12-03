/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 14:40:55 by nseon             #+#    #+#             */
/*   Updated: 2025/12/03 15:24:12 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AMateria.hpp"

AMateria::AMateria() : _type("void")
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &model)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	_type = model._type;
}

AMateria &AMateria::operator=(AMateria const &model)
{
	std::cout << "AMateria copy assignement operator called" << std::endl;
	if (this != &model)
		_type = model._type;
	return(*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria parameterized constructor called" << std::endl;
	_type = type;
}

std::string const &AMateria::getType() const
{
	return (_type);
}
