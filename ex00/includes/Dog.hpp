/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:15:41 by nseon             #+#    #+#             */
/*   Updated: 2025/11/28 14:10:52 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
	private:
	
	public:
		Dog();
		Dog(const Dog &model);
		Dog &operator=(const Dog &model);
		~Dog();

		void makeSound() const;
};

#endif
