/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:23:08 by nseon             #+#    #+#             */
/*   Updated: 2025/12/08 13:42:13 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include <Cure.hpp>

Cure::Cure()
{
	_type = "cure";
}

Cure::Cure(Cure const &model) : AMateria(model)
{}

Cure &Cure::operator=(Cure const &model)
{
	if (this != &model)
		_type = model._type;
	return (*this);
}

Cure::~Cure()
{}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'" << "s wounds *" << std::endl;
}

AMateria	*Cure::clone() const
{
	return (new Cure(*this));
}
