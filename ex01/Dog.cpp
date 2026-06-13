/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 11:24:25 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/12 17:19:42 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void Dog::setIdeas(int index, std::string thought)
{
    if (index >= 0 && index <= 100)
    {
        this->atribute->ideas[index] = thought;
    }
    else
        std::cout << "\nindex out of range, please 0 to 100" << std::endl;
}

std::string Dog::getIdeas(int index) const
{
    return (this->atribute->ideas[index]);
}

Dog::Dog()
{
    this->atribute = new Brain();
    this->type = "Dog";
    std::cout << "Dog default constructor has been called" << std::endl;
}

Dog::~Dog()
{
    delete this->atribute;
    std::cout << "Dog default Destructer has been called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        delete this->atribute;
        this->type = other.type;
        this->atribute = new Brain(*other.atribute);
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof!" << std::endl;
}

Dog:: Dog(const Dog& other) : Animal(other)
{
    this->atribute = new Brain(*other.atribute);
    *this = other;
    this->type = "Dog";
    std::cout << "Dog Copy constructor has been called" << std::endl;
}