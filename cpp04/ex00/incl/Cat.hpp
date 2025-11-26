/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 05:29:36 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/26 06:08:40 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat: public Animal {
	public:
		Cat();
		Cat(Cat const &copy);
		Cat& operator=(Cat const &assignment);
		~Cat();
		
		virtual void	makeSound() const;
};

#endif