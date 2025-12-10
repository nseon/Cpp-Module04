/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 10:21:00 by nseon             #+#    #+#             */
/*   Updated: 2025/12/10 12:46:44 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	MateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("Hero");
	AMateria* ice;
	AMateria* cure;
	
	ice = src->createMateria("ice");
	me->equip(ice);
	cure = src->createMateria("cure");
	me->equip(cure);
	cure = src->createMateria("cure");
	me->equip(cure);
	cure = src->createMateria("cure");
	me->equip(cure);
	cure = src->createMateria("cure");
	me->equip(cure);
	delete cure;
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	
	me->unequip(5);
	me->unequip(0);
	delete ice;
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	
	return 0;
}
