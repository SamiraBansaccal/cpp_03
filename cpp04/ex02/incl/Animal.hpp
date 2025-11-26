/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 05:29:30 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/26 09:02:40 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal {
	public:
		Animal();
		Animal(Animal const &copy);
		Animal& operator=(Animal const &assignment);
		virtual ~Animal();
		
		virtual void	makeSound() const = 0;
		std::string		getType() const;
	protected:
		std::string _type;
};

#endif