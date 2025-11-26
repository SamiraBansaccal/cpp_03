/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 01:29:33 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/26 01:26:40 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Alice");
    ClapTrap b("Bob");

    a.attack("Bob");
    b.takeDamage(0);

    b.attack("Alice");
    a.takeDamage(5);

    a.beRepaired(3);

    // Test d'énergie
    for (int i = 0; i < 10; i++)
        a.attack("Bob");
    a.takeDamage(150);
    a.takeDamage(1);
    return 0;
}