/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 15:03:30 by nseon             #+#    #+#             */
/*   Updated: 2025/12/08 14:51:42 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Character.hpp"

Character::Character() : _name("Default")
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(Character const &m) : _name(m._name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = m._inventory[i]->clone();
}

Character &Character::operator=(Character const &m)
{
	if (this != &m)
	{
		_name = m._name;
		for (int i = 0; i < 4; i++)
		{
			delete _inventory[i];
			_inventory[i] = m._inventory[i]->clone();
		}
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
}

std::string const &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			std::cout << _name <<" has equipped " << m->getType() << " on his " << i << " inventory's slot" << std::endl;
			return ;
		}
	}
	std::cout << _name << "'s inventory is full" << std::endl;
}

void Character::unequip(int idx)
{
	if (!(0 <= idx && idx <= 3))
	{
		std::cout << _name << " can't unequip materia, index is out of range" << std::endl;
		return ;
	}		
	if (_inventory[idx])
		std::cout << _name << " drop the " << _inventory[idx]->getType() << std::endl;
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (!(0 <= idx && idx <= 3))
	{
		std::cout << _name << " can't use materia, index is out of range" << std::endl;
		return ;
	}
	if (_inventory[idx])
		_inventory[idx]->use(target);
	else
		std::cout << _name << " can't use materia, inventory's slot is empty" << std::endl; 
}
