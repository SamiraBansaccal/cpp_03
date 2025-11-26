/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 03:50:34 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/21 01:43:07 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	_hit = 100;
	_energy = 50;
	_attack = 20;
	std::cout << "ScavTrap " << _name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	_hit = 100;
	_energy = 50;
	_attack = 20;
	std::cout << "ScavTrap " << _name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy): ClapTrap(copy) {
	*this = copy;
	std::cout << "ScavTrap " << _name << " Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &assignment) {
	ClapTrap::operator=(assignment);
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _name << " Destructor called" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " is now in Gatekeeper mode" << std::endl;
}
