/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:40:04 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/26 08:37:08 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/Brain.hpp"

Brain::Brain() {
	std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(Brain const &copy) {
	std::copy(copy._ideas, copy._ideas + 100, _ideas);
	std::cout <<  "Brain Copy Constructor called" << std::endl;
}

Brain& Brain::operator=(Brain const &assignment) {
	if (this != &assignment)
		std::copy(assignment._ideas, assignment._ideas + 100, _ideas);
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain Destructor called" << std::endl;
}