/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 15:19:24 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/12 17:15:09 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << "========== TEST 1: POLYMORPHISM ARRAY ==========\n" << std::endl;

    Animal* animal[10];

    for (int i = 0; i < 10; i++)
    {
    if (i < 5)
    animal[i] = new Dog();
    else
    animal[i] = new Cat();
    }

    std::cout << "\n--- Making sounds ---" << std::endl;
    for (int i = 0; i < 10; i++)
    {
    std::cout << "[" << i << "] ";
    animal[i]->makeSound();
    }

    std::cout << "\n--- Deleting animals (polymorphism test - proper destructors called) ---" << std::endl;
    for (int i = 0; i < 10; i++)
    delete animal[i];

    std::cout << "\n========== TEST 2: DEEP COPY - DOG (Copy Constructor) ==========\n" << std::endl;
    Dog dog1;
    Dog dog2(dog1);
    std::cout << "If no crash/memory error, deep copy worked!" << std::endl;

    std::cout << "\n========== TEST 3: DEEP COPY - DOG (Assignment Operator) ==========\n" << std::endl;
    Dog dog3;
    Dog dog4;
    dog4 = dog3;
    std::cout << "\nIf no crash/memory error, deep copy worked!" << std::endl;
    
    std::cout << "\n========== TEST 4: DEEP COPY - CAT (Copy Constructor) ==========\n" << std::endl;
    Cat cat1;
    cat1.setIdeas(0, " MEOW MEOW ");
    
    Cat cat2(cat1);
    std::cout << "If no crash/memory error, deep copy worked!" << std::endl;
    cat2.setIdeas(0, "QUE CALOR BIXO...OPA MEOW MEO2");
    
    std::cout << "\n\n NOW ITS TIME 1::  " << cat1.getIdeas(0) << std::endl;
    std::cout << "\n\n NOW ITS TIME 2::  " << cat2.getIdeas(0) << std::endl;
    
    std::cout << "\n========== TEST 5: DEEP COPY - CAT (Assignment Operator) ==========\n" << std::endl;
    Cat cat3;
    Cat cat4;
    cat4 = cat3;

    cat3.setIdeas(0, "I WOULD PREFER A SOUP");
    cat4.setIdeas(0, "I LIKE FISH");
    std::cout << "\n NOW ITS TIME 1::  " << cat3.getIdeas(0) << std::endl;
    std::cout << "\n NOW ITS TIME 2::  " << cat4.getIdeas(0) << std::endl;

    std::cout << "If no crash/memory error, deep copy worked!" << std::endl;

    std::cout << "\n========== DESTRUCTION (END OF PROGRAM - Check order) ==========\n" << std::endl;

return (0);
}
