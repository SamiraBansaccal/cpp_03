/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 03:50:39 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/26 04:36:23 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &copy);
		ScavTrap& operator=(ScavTrap const &assignment);
		~ScavTrap();

		void	attack(const std::string& target);
		void	guardGate();
};

#endif