/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:23:16 by nseon             #+#    #+#             */
/*   Updated: 2025/12/08 13:46:01 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include <Ice.hpp>

Ice::Ice()
{
	_type = "ice";
}

Ice::Ice(Ice const &model) : AMateria(model)
{}

Ice &Ice::operator=(Ice const &model)
{
	if (this != &model)
		_type = model._type;
	return (*this);
}

Ice::~Ice()
{}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}

AMateria	*Ice::clone() const
{
	return (new Ice(*this));
}
