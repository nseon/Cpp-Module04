/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 10:41:03 by nseon             #+#    #+#             */
/*   Updated: 2025/12/03 12:22:44 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>

class Animal
{
protected:
	std::string _type;
public:
	Animal();
	Animal(Animal const &model);
	Animal &operator=(const Animal &model);
	virtual ~Animal();

	virtual void makeSound() const;
	std::string getType() const;
};

#endif
