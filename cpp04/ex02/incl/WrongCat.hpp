/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 05:29:52 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/26 07:22:52 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
	public:
		WrongCat();
		WrongCat(WrongCat const &copy);
		WrongCat& operator=(WrongCat const &assignment);
		~WrongCat();
		
		void	makeSound() const;
};

#endif