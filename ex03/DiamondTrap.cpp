/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 01:53:28 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/26 03:56:53 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("Default_clap_name"), ScavTrap(), FragTrap(), _name("Default") {
	_hit = FragTrap::_hit;
	_energy = ScavTrap::_energy;
	_attack = FragTrap::_attack;
	std::cout << "DiamondTrap " << _name << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name) {
	_hit = FragTrap::_hit;
	_energy = ScavTrap::_energy;
	_attack = FragTrap::_attack;
	std::cout << "DiamondTrap " << _name << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy), _name(copy._name) {
	*this = copy;
	std::cout << "DiamondTrap " << _name << " Copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &assignment) {
	ClapTrap::operator=(assignment);
	ScavTrap::operator=(assignment);
	FragTrap::operator=(assignment);
	_name = assignment._name;
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << _name << " Destructor called" << std::endl;
}

void	DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name: " << _name << std::endl;
	std::cout << "ClapTrap name:    " << ClapTrap::_name << std::endl;
}