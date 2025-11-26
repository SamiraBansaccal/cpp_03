/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 01:35:27 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/26 01:37:33 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap s("Guardian");

    s.attack("enemy");
    s.takeDamage(20);
    s.beRepaired(10);

    s.guardGate();

    for (int i = 0; i < 5; i++)
        s.attack("intruder");

    return 0;
}