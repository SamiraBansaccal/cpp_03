/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 05:11:56 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/26 09:05:50 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/Animal.hpp"
#include "incl/Cat.hpp"
#include "incl/Dog.hpp"
#include "incl/WrongAnimal.hpp"
#include "incl/WrongCat.hpp"
#include "incl/Brain.hpp"

int main() {
    std::cout << "=== Creating array of Animals ===" << std::endl;
    const int size = 6;
    Animal* animals[size];
    
    // Moitié Dogs
    for (int i = 0; i < size / 2; i++) {
        animals[i] = new Dog();
    }
    
    // Moitié Cats
    for (int i = size / 2; i < size; i++) {
        animals[i] = new Cat();
    }
    
    std::cout << "\n=== Making sounds ===" << std::endl;
    for (int i = 0; i < size; i++) {
        animals[i]->makeSound();
    }
    
    std::cout << "\n=== Deleting array ===" << std::endl;
    for (int i = 0; i < size; i++) {
        delete animals[i];
    }
    
    std::cout << "\n=== Testing deep copy ===" << std::endl;
    Dog basic;
    {
        Dog tmp = basic;  // Copy constructor
    }
    //Animal* test = new Animal();
    return 0;
}