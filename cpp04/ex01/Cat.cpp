/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 05:14:16 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/26 08:53:10 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/Cat.hpp"

Cat::Cat(): Animal() {
	_type = "Cat";
	_brain = new Brain();
	std::cout << _type << " Default Constructor called" << std::endl;
}

Cat::Cat(Cat const &copy): Animal(copy) {
	_brain = new Brain(*copy._brain);
	std::cout << _type << " Copy Constructor called" << std::endl;
}

Cat& Cat::operator=(Cat const &assignment) {
	if (this != &assignment)
	{
		Animal::operator=(assignment);
		delete _brain;
		_brain = new Brain(*assignment._brain);
	}
	return (*this);
}

Cat::~Cat() {
	delete _brain;
	std::cout << _type << " Destructor called" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << _type << " says: MIAOU MDFK!" << std::endl;
}