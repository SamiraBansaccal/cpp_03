/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 02:06:49 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/26 03:58:48 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    std::cout << "========== TEST 1: Default Constructor ==========" << std::endl;
    {
        DiamondTrap defaultDiamond;
        defaultDiamond.whoAmI();
        defaultDiamond.attack("a dummy target");
        defaultDiamond.takeDamage(30);
        defaultDiamond.beRepaired(15);
        defaultDiamond.guardGate();
        defaultDiamond.highFivesGuys();
    }

    std::cout << "\n========== TEST 2: Parameterized Constructor ==========" << std::endl;
    {
        DiamondTrap diamond("Sparkle");
        diamond.whoAmI();
        std::cout << "\n--- Testing inherited methods ---" << std::endl;
        diamond.attack("enemy");
        diamond.takeDamage(50);
        diamond.beRepaired(30);
        diamond.guardGate();
        diamond.highFivesGuys();
    }

    std::cout << "\n========== TEST 3: Copy Constructor ==========" << std::endl;
    {
        DiamondTrap original("Original");
        original.whoAmI();
        std::cout << "\n--- Creating copy ---" << std::endl;
        DiamondTrap copy(original);
        copy.whoAmI();
        std::cout << "\n--- Original attacks ---" << std::endl;
        original.attack("target1");
        std::cout << "--- Copy attacks ---" << std::endl;
        copy.attack("target2");
    }

    std::cout << "\n========== TEST 4: Assignment Operator ==========" << std::endl;
    {
        DiamondTrap first("First");
        DiamondTrap second("Second");
        
        std::cout << "\n--- Before assignment ---" << std::endl;
        first.whoAmI();
        second.whoAmI();
        
        std::cout << "\n--- Assignment ---" << std::endl;
        second = first;
        
        std::cout << "\n--- After assignment ---" << std::endl;
        first.whoAmI();
        second.whoAmI();
    }

    std::cout << "\n========== TEST 5: Attributes Check ==========" << std::endl;
    {
        DiamondTrap d("Tester");
        d.whoAmI();
        
        std::cout << "\n--- Testing Hit Points (should be 100 from FragTrap) ---" << std::endl;
        for (int i = 0; i < 5; i++) {
            d.takeDamage(20);
        }
        d.takeDamage(10); // Should fail (no HP left)
        
        std::cout << "\n--- Testing Energy Points (should be 50 from ScavTrap) ---" << std::endl;
        DiamondTrap energyTest("EnergyTest");
        for (int i = 0; i < 50; i++) {
            std::cout << "Attack " << (i + 1) << ": ";
            energyTest.attack("dummy");
        }
        
        std::cout << "\n--- Testing Attack Damage (should be 30 from FragTrap) ---" << std::endl;
        DiamondTrap damageTest("DamageTest");
        damageTest.attack("target");
    }

    std::cout << "\n========== TEST 6: Multiple DiamondTraps ==========" << std::endl;
    {
        DiamondTrap d1("Alpha");
        DiamondTrap d2("Beta");
        DiamondTrap d3("Gamma");
        
        d1.whoAmI();
        d2.whoAmI();
        d3.whoAmI();
        
        std::cout << "\n--- Battle simulation ---" << std::endl;
        d1.attack("Beta");
        d2.takeDamage(30);
        d2.attack("Alpha");
        d1.takeDamage(30);
        d3.attack("both of them");
    }

    std::cout << "\n========== TEST 7: Special Abilities ==========" << std::endl;
    {
        DiamondTrap special("Special");
        special.guardGate();
        special.highFivesGuys();
        special.attack("target");
        special.whoAmI();
    }

    std::cout << "\n========== END OF TESTS ==========" << std::endl;
    return 0;
}