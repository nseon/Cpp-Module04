/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 19:30:59 by nseon             #+#    #+#             */
/*   Updated: 2025/12/08 17:19:21 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <AMateria.hpp>
# include <ICharacter.hpp>

class Cure : public AMateria {
	public:
		Cure();
		Cure(Cure const &model);
		Cure &operator=(Cure const &model);
		~Cure();

		AMateria	*clone() const;
		void 		use(ICharacter& target);
};

#endif
