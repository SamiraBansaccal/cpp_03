/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 05:14:19 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/26 07:24:34 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/Animal.hpp"

Animal::Animal(): _type("Animal") {
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(Animal const &copy): _type(copy._type) {
	std::cout <<  "Animal Copy Constructor called" << std::endl;
}

Animal& Animal::operator=(Animal const &assignment) {
	_type = assignment.getType();
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal Destructor called" << std::endl;
}

void	Animal::makeSound() const {
	std::cout << _type << " says: Unidentified animal noise..." << std::endl;
}

std::string		Animal::getType() const {
	return (_type);
}

