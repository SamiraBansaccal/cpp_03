/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 01:29:40 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/26 01:40:40 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);
		~ClapTrap();

		ClapTrap& operator=(ClapTrap const &assignement);

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	protected:
		std::string		_name;
		unsigned int	_hit;
		unsigned int	_energy;
		unsigned int	_attack;
};

#endif