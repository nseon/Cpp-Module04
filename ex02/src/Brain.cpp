/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 14:23:55 by nseon             #+#    #+#             */
/*   Updated: 2025/12/03 11:22:44 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "void";
}

Brain::Brain(Brain const &model)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = model.ideas[i];
}

Brain &Brain::operator=(Brain const &model)
{
	std::cout << "Brain copy assignement operator called" << std::endl;
	if (this != &model)
		for (int i = 0; i < 100; i++)
			ideas[i] = model.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}
