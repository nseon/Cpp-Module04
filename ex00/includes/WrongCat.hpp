/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:15:52 by nseon             #+#    #+#             */
/*   Updated: 2025/12/09 09:36:35 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	private:
	
	public:
		WrongCat();
		WrongCat(const WrongCat &model);
		WrongCat &operator=(const WrongCat &model);
		~WrongCat();

		void makeSound() const;
};

#endif
