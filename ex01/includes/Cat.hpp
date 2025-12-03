/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:15:52 by nseon             #+#    #+#             */
/*   Updated: 2025/12/03 12:22:53 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal{
	private:
		Brain *_brain;		
	public:
		Cat();
		Cat(const Cat &model);
		Cat &operator=(const Cat &model);
		~Cat();

		void makeSound() const;
};

#endif
