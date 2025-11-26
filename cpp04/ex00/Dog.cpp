/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 05:14:12 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/26 09:07:32 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/Dog.hpp"

Dog::Dog(): Animal() {
	_type = "Dog";
	std::cout << _type << " Default Constructor called" << std::endl;
}

Dog::Dog(Dog const &copy): Animal(copy) {
	std::cout << _type << " Copy Constructor called" << std::endl;
}

Dog& Dog::operator=(Dog const &assignment) {
	if (this != &assignment)
		Animal::operator=(assignment);
	return (*this);
}

Dog::~Dog() {
	std::cout << _type << " Destructor called" << std::endl;
}

void	Dog::makeSound() const {
	std::cout << _type << " says: WOOF I GUESS ?" << std::endl;
}
