/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 14:23:47 by nseon             #+#    #+#             */
/*   Updated: 2025/12/01 15:53:46 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain {
	public:
		std::string ideas[100];

		Brain();
		Brain(Brain const &model);
		Brain &operator=(Brain const &model);
		~Brain();
};

#endif
