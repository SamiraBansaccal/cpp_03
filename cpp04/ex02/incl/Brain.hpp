/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:32:47 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/26 08:32:53 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
#include <iostream>
#include <algorithm>

class Brain {
	public:
		Brain();
		Brain(Brain const &copy);
		Brain& operator=(Brain const &assignment);
		~Brain();
		
	protected:
		std::string	_ideas[100];
};

#endif