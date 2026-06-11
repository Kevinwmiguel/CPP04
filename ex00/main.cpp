/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 02:12:30 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/11 21:18:06 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "========== BASIC TEST ==========\n" << std::endl;

    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "Animal type: " << animal->getType() << std::endl;
    std::cout << "Dog type:    " << dog->getType() << std::endl;
    std::cout << "Cat type:    " << cat->getType() << std::endl;

    std::cout << "\n--- Sounds ---" << std::endl;
    animal->makeSound();
    dog->makeSound();
    cat->makeSound();

    std::cout << "\n========== COPY CONSTRUCTOR ==========\n" << std::endl;

    Dog originalDog;
    Dog copiedDog(originalDog);

    std::cout << "Original Dog type: " << originalDog.getType() << std::endl;
    std::cout << "Copied Dog type:   " << copiedDog.getType() << std::endl;

    Cat originalCat;
    Cat copiedCat(originalCat);

    std::cout << "Original Cat type: " << originalCat.getType() << std::endl;
    std::cout << "Copied Cat type:   " << copiedCat.getType() << std::endl;

    std::cout << "\n========== ASSIGNMENT OPERATOR ==========\n" << std::endl;

    Dog assignDog;
    assignDog = originalDog;

    Cat assignCat;
    assignCat = originalCat;

    std::cout << "Assigned Dog type: " << assignDog.getType() << std::endl;
    std::cout << "Assigned Cat type: " << assignCat.getType() << std::endl;

    std::cout << "\n========== POLYMORPHISM ==========\n" << std::endl;

    const Animal* zoo[4];
    zoo[0] = new Dog();
    zoo[1] = new Cat();
    zoo[2] = new Dog();
    zoo[3] = new Cat();

    for (int i = 0; i < 4; i++)
    {
        std::cout << "[" << i << "] " << zoo[i]->getType() << ": ";
        zoo[i]->makeSound();
    }

    std::cout << "\n========== WRONG POLYMORPHISM ==========\n" << std::endl;

    const WrongAnimal* zooo[4];
    zooo[0] = new WrongCat();
    zooo[1] = new WrongCat();
    zooo[2] = new WrongCat();

    for (int i = 0; i < 3; i++)
    {
        std::cout << "[" << i << "] " << zooo[i]->getType() << ": ";
        zooo[i]->makeSound();
    } 
    
    std::cout << "\n========== DESTRUCTION ==========\n" << std::endl;

    delete animal;
    delete dog;
    delete cat;

    for (int i = 0; i < 4; i++)
        delete zoo[i];

    return 0;
}