/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 01:38:24 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/21 01:43:37 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	_hit = 100;
	_energy = 100;
	_attack = 30;
	std::cout << "FragTrap " << _name << " constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	_hit = 100;
	_energy = 100;
	_attack = 30;
	std::cout << "FragTrap " << _name << " constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy): ClapTrap(copy) {
	*this = copy;
	std::cout << "FragTrap " << _name << " Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const &assignment) {
	ClapTrap::operator=(assignment);
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << _name << " requests a high five!" << std::endl;
}