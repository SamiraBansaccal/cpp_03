/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 01:52:29 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/26 04:36:00 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
	public:
		DiamondTrap();
		DiamondTrap(std::string const &name);
		DiamondTrap(DiamondTrap const &copy);
		DiamondTrap& operator=(DiamondTrap const &assignment);
		~DiamondTrap();

		void	whoAmI();
		using 	ScavTrap::attack;
	private:
		std::string	_name;
};

#endif
