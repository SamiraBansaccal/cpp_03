/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 05:11:56 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/26 07:15:20 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/Animal.hpp"
#include "incl/Cat.hpp"
#include "incl/Dog.hpp"
#include "incl/WrongAnimal.hpp"
#include "incl/WrongCat.hpp"

int main() {
    std::cout << "=== Basic Animal tests ===" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    std::cout << "\n=== Destroying basic animals ===" << std::endl;
    delete i;     // Dernier créé, premier détruit
    delete j;
    delete meta;  // Premier créé, dernier détruit
    
    std::cout << "\n=== Correct polymorphism test ===" << std::endl;
    const Animal* animal = new Cat();
    animal->makeSound();  // Devrait dire "MIAOU"
    delete animal;
    
    std::cout << "\n=== Wrong polymorphism test ===" << std::endl;
    const WrongAnimal* wrong = new WrongCat();
    wrong->makeSound();  // Devrait dire "Unidentified WrongAnimal noise..."
    delete wrong;
    
    return 0;
}