/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 05:29:41 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/26 06:09:05 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog: public Animal {
	public:
		Dog();
		Dog(Dog const &copy);
		Dog& operator=(Dog const &assignment);
		~Dog();
		
		virtual void	makeSound() const;
};

#endif