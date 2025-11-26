/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 01:34:08 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/26 04:36:12 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap: virtual public ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &copy);
		FragTrap& operator=(FragTrap const &assignment);
		~FragTrap();

		void	 highFivesGuys();
};

#endif