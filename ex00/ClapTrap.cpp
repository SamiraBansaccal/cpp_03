/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 01:29:37 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/26 01:24:24 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Default"), _hit(10), _energy(10), _attack(0) {
	std::cout << "ClapTrap " << _name << " Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit(10), _energy(10), _attack(0) {
	std::cout << "ClapTrap " << _name << " Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy): _name(copy._name), _hit(copy._hit), _energy(copy._energy), _attack(copy._attack) {
	std::cout << "ClapTrap " << _name << " Copy constructor called" << std::endl;
	
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &assignement) {
	if (this != &assignement)
	{
		_name = assignement._name;
		_hit = assignement._hit;
		_energy = assignement._energy;
		_attack = assignement._attack;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target) {
	if (_energy && _hit)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
		_energy--;
	}
	else
		std::cout << "ClapTrap " << _name << " can't do shit, he's out!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hit)
	{
		std::cout << "ClapTrap " << _name << " takes damages, costing " << amount << " hit points!" << std::endl;
		if (_hit < amount)
			_hit = 0;
		else
			_hit -= amount;
	}
	else
		std::cout << "ClapTrap " << _name << " is already out, savage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_energy && _hit)
	{
		std::cout << "ClapTrap " << _name << " regains " << amount << " hit points!" << std::endl;
		_hit += amount;
		_energy--;
	}
	else
		std::cout << "ClapTrap " << _name << " can't do shit, he's out!" << std::endl;
	
}
