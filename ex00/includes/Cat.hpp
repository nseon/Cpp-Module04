/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:15:52 by nseon             #+#    #+#             */
/*   Updated: 2025/11/28 14:10:49 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
	private:
	
	public:
		Cat();
		Cat(const Cat &model);
		Cat &operator=(const Cat &model);
		~Cat();

		void makeSound() const;
};

#endif
