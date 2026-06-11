/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 13:41:13 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/11 22:21:34 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->atribute = new Brain();
    std::cout << "Cat default constructor has been called" << std::endl;
}

Cat:: Cat(const Cat& other) : Animal(other)
{
    this->atribute = new Brain(*other.atribute);
    std::cout << "Cat Copy constructor has been called" << std::endl;
}

Cat::~Cat()
{
    delete this->atribute;
    std::cout << "Cat default Destructor has been called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        delete this->atribute;
        this->type = other.type;
        this->atribute = new Brain(*other.atribute);
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow!" << std::endl;
}

