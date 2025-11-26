/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 05:14:16 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/26 09:07:21 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/Cat.hpp"

Cat::Cat(): Animal() {
	_type = "Cat";
	std::cout << _type << " Default Constructor called" << std::endl;
}

Cat::Cat(Cat const &copy): Animal(copy) {
	std::cout << _type << " Copy Constructor called" << std::endl;
}

Cat& Cat::operator=(Cat const &assignment) {
	if (this != &assignment)
		Animal::operator=(assignment);
	return (*this);
}

Cat::~Cat() {
	std::cout << _type << " Destructor called" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << _type << " says: MIAOU MDFK!" << std::endl;
}