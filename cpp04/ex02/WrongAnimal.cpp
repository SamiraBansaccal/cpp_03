/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 05:25:59 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/26 06:55:58 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal") {
	std::cout << _type << " Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy): _type(copy._type) {
	std::cout << _type << " Copy Constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &assignment) {
	_type = assignment.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << _type << " Destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const {
	std::cout << _type << " says: Unidentified WrongAnimal noise..." << std::endl;
}

std::string		WrongAnimal::getType() const {
	return (_type);
}
