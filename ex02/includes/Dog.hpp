/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:15:41 by nseon             #+#    #+#             */
/*   Updated: 2025/12/03 12:22:00 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal{
	private:
		Brain *_brain;		
	public:
		Dog();
		Dog(const Dog &model);
		Dog &operator=(const Dog &model);
		~Dog();

		void makeSound() const;
};

#endif
