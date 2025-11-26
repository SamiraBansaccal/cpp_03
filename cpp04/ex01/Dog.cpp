/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 05:14:12 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/26 08:53:23 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/Dog.hpp"

Dog::Dog(): Animal() {
	_type = "Dog";
	_brain = new Brain();
	std::cout << _type << " Default Constructor called" << std::endl;
}

Dog::Dog(Dog const &copy): Animal(copy) {
	_brain = new Brain(*copy._brain);
	std::cout << _type << " Copy Constructor called" << std::endl;
}

Dog& Dog::operator=(Dog const &assignment) {
	if (this != &assignment)
	{
		Animal::operator=(assignment);
		delete _brain;
		_brain = new Brain(*assignment._brain);
	}
	return (*this);
}

Dog::~Dog() {
	delete _brain;
	std::cout << _type << " Destructor called" << std::endl;
}

void	Dog::makeSound() const {
	std::cout << _type << " says: WOOF I GUESS ?" << std::endl;
}
