/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 01:43:37 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/26 01:43:39 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap f("Tank");

    f.attack("enemy");
    f.takeDamage(50);
    f.beRepaired(30);

    f.highFivesGuys();

    return 0;
}