*This project has been created as part of the 42 curriculum by mcaro-ro*

# CPP Module 04 – Polymorphism, Abstract Classes & Interfaces
## 📖 Description
CPP Module 04 introduces the concepts of subtype polymorphism, abstract classes, and interfaces in C++.
The goal is to practice dynamic behavior through virtual functions, proper memory management with deep copies, and the design of abstract interfaces.
Across four exercises, you will gradually build a hierarchy of Animal classes, extend them with brains, enforce abstraction, and finally implement a mini‑system of magical materias inspired by RPG mechanics.

## ⚙️ Instructions
1. Clone the repository from your Git workspace.
2. Navigate into the exercise folder (ex00, ex01, ex02, or ex03).
3. Compile the project using make.
4. Each exercise has its own main.cpp to test the required functionality.
5. Clean build artifacts with:
	```
	make clean
	```
	```
	```
	make fclean
	```
	```
	make re
	```
## 📚 Concepts Covered
1. Polymorphism Basics
	- Virtual functions and dynamic dispatch.
	- Overriding makeSound() in derived classes.
	- Demonstrating correct vs. incorrect polymorphism (Animal vs. WrongAnimal).
2. Dynamic Memory & Deep Copy
	- Managing resources with new and delete.
	- Implementing deep copies for classes with pointer members (Brain).
3. Abstract Classes
	- Declaring pure virtual functions.
	- Preventing instantiation of base classes (Animal becomes abstract).
4. Interfaces in C++98
	- Designing pure abstract classes (ICharacter, IMateriaSource).
	- Implementing concrete classes (Character, MateriaSource) that follow interface contracts.
	- Handling inventories, cloning, and safe memory management.
5. Orthodox Canonical Form
	- Default constructor
	- Copy constructor
	- Copy assignment operator
	- Destructor
	Ensuring proper object lifecycle management across all exercises.

## 🧱 Exercises
- ex00 – Polymorphism ✅
	- Implement Animal base class with Dog and Cat derived classes.
	- Add makeSound() and getType().
	- Demonstrate polymorphism with pointers to Animal.
	- Implement WrongAnimal and WrongCat to show incorrect behavior.
	Focus: virtual functions and dynamic dispatch.
- ex01 – I don’t want to set the world on fire ✅
	- Implement Brain class with 100 ideas.
	- Dog and Cat contain a Brain*.
	- Ensure deep copy in constructors and assignment.
	- Test with arrays of Animal* and proper destruction.
	Focus: dynamic memory management and deep copy.
- ex02 – Abstract class ✅
	- Make Animal abstract by declaring pure virtual makeSound().
	- Prevent instantiation of Animal.
	- Derived classes (Dog, Cat) remain instantiable.
	Focus: abstraction and enforcing design constraints.
- ex03 – Interface & recap (optional) ❌
	- Implement AMateria abstract class with Ice and Cure concrete classes.
	- Define interfaces ICharacter and IMateriaSource.
	- Implement Character with inventory of 4 slots and MateriaSource with learning/creation logic.
	- Demonstrate polymorphic behavior with equip, unequip, and use.
	Focus: interfaces, polymorphism, and memory safety.
