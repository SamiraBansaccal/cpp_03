/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 05:26:02 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/26 07:21:52 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal() {
	_type = "WrongCat";
	std::cout << _type << " Default Constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy): WrongAnimal(copy) {
	std::cout << _type << " Copy Constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const &assignment) {
	_type = assignment.getType();
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << _type << " Destructor called" << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << _type << " says: MIAOU MDFK!" << std::endl;
}