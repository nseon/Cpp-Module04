/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:18:11 by nseon             #+#    #+#             */
/*   Updated: 2025/12/08 17:51:12 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
	private:
		AMateria *_inventory[4];
	public:
		MateriaSource();	
		MateriaSource(MateriaSource const &m);	
		MateriaSource &operator=(MateriaSource const &m);	
		~MateriaSource();

		void learnMateria(AMateria * m);
		AMateria* createMateria(std::string const & type);
};

#endif
