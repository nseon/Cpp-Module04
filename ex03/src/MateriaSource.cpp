/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 16:09:21 by nseon             #+#    #+#             */
/*   Updated: 2025/12/08 17:18:54 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &m)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = m._inventory[i]->clone();
}

MateriaSource &MateriaSource::operator=(MateriaSource const &m)
{
	if (this != &m)
	{
		for (int i = 0; i < 4; i++)
		{
			delete _inventory[i];
			_inventory[i] = m._inventory[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			std::cout << m->getType() << " was learn on slot " << i << std::endl;
			return ;
		}
	}
	delete m;
	std::cout << "MateriaSource's inventory is full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (type == _inventory[i]->getType())
			return (_inventory[i]->clone());
	}
	std::cout << "MateriaSource doesn't contain any materia named " <<  type << std::endl;
	return (0);
}
