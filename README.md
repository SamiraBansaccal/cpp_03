# CPP Module 01 (42 School)

## 📋 Description
This module focuses on **Inheritance** in C++. The goal is to learn how to design a base class and derive specialized classes from it, while understanding the chain of constructors and destructors.

## 🧠 Implementation Logic (Score: 100/100)
The module follows the evolution of a robot named ClapTrap through several exercises:

- **Inheritance & Reusability**: 
  - **ClapTrap**: The base class containing the core attributes (Hit points, Energy points, Attack damage).
  - **ScavTrap**: Inherits from ClapTrap with a specialized `guardGate` mode and different base stats.
  - **FragTrap**: Another derived class with a `highFivesGuys` method, showcasing how multiple classes can inherit from the same base.
- **Constructor/Destructor Chain**: Understanding that the base class is built first and destroyed last (LIFO logic).
- **Function Overriding**: Redefining the `attack` function in derived classes to give them unique behaviors while keeping the same interface.
- **Shadowing**: Managing how attributes from the parent class are accessed and modified by the children.

## 📂 Project Structure
- `ex00/`: Aaaaand... OPEN! (Basic ClapTrap class).
- `ex01/`: Serena, my love! (Introduction of ScavTrap and inheritance).
- `ex02/`: Repetitive work (FragTrap and deepening inheritance).
- `ex03/`: Now it’s weird! (DiamondTrap - The dreaded Diamond Problem and Virtual Inheritance).

## 🛠️ Usage & Compilation

### Compilation
Everything is compiled in C++98 to ensure standard compatibility.
```bash
make
```
Execution (Example: Battle simulation)
```bash
./claptrap
```
