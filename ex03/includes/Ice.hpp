/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 19:30:25 by nseon             #+#    #+#             */
/*   Updated: 2025/12/08 14:46:45 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <AMateria.hpp>
# include <ICharacter.hpp>

class Ice : public AMateria {
	public:
		Ice();
		Ice(Ice const &model);
		Ice &operator=(Ice const &model);
		~Ice();

		AMateria	*clone() const;
		void use(ICharacter& target);
};

#endif
