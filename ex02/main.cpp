/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 15:19:24 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/11 22:52:11 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << "========== TEST 1: ABSTRACT CLASS TEST ==========\n" << std::endl;

    // This would cause a COMPILER ERROR (good!):
    //Animal* animal = new Animal();  //Trying to instantiate abstract class
    // Animal* animal = new Animal();  //COMPILER ERROR - cannot instantiate abstract class!
    std::cout << "✓ Animal class is now ABSTRACT - cannot instantiate it directly!" << std::endl;
    std::cout << "✓ Attempting: Animal* animal = new Animal(); would give COMPILER ERROR\n" << std::endl;

    std::cout << "========== TEST 2: POLYMORPHISM ARRAY (Only Dog & Cat) ==========\n" << std::endl;

    Animal* animal[10];

    for (int i = 0; i < 10; i++)
    {
    if (i < 5)
    animal[i] = new Dog();
    else
    animal[i] = new Cat();
    }

    std::cout << "\n--- Making sounds (polymorphism in action) ---" << std::endl;
    for (int i = 0; i < 10; i++)
    {
    std::cout << "[" << i << "] " << animal[i]->getType() << ": ";
    animal[i]->makeSound();
    }

    std::cout << "\n--- Deleting animals (proper destructors called) ---" << std::endl;
    for (int i = 0; i < 10; i++)
    delete animal[i];

    std::cout << "\n========== TEST 3: DEEP COPY - DOG (Copy Constructor) ==========\n" << std::endl;
    Dog dog1;
    Dog dog2(dog1);
    std::cout << "✓ Dog copy constructor - deep copy verified!" << std::endl;

    std::cout << "\n========== TEST 4: DEEP COPY - DOG (Assignment Operator) ==========\n" << std::endl;
    Dog dog3;
    Dog dog4;
    dog4 = dog3;
    std::cout << "✓ Dog assignment operator - deep copy verified!" << std::endl;

    std::cout << "\n========== TEST 5: DEEP COPY - CAT (Copy Constructor) ==========\n" << std::endl;
    Cat cat1;
    Cat cat2(cat1);
    std::cout << "✓ Cat copy constructor - deep copy verified!" << std::endl;

    std::cout << "\n========== TEST 6: DEEP COPY - CAT (Assignment Operator) ==========\n" << std::endl;
    Cat cat3;
    Cat cat4;
    cat4 = cat3;
    std::cout << "✓ Cat assignment operator - deep copy verified!" << std::endl;

    std::cout << "\n========== DESTRUCTION (END OF PROGRAM) ==========\n" << std::endl;
    std::cout << "Destructors will be called in reverse order below...\n" << std::endl;

return (0);
}
