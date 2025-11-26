/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 05:29:47 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/26 06:59:17 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <string>

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &copy);
		WrongAnimal& operator=(WrongAnimal const &assignment);
		~WrongAnimal();
		
		void			makeSound() const;
		std::string		getType() const;
	protected:
		std::string _type;
};

#endif