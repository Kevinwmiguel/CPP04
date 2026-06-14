/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 13:41:13 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/14 23:43:58 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void Cat::setIdeas(int index, std::string thought)
{
    if (index >= 0 && index <= 100)
    {
        this->atribute->ideas[index] = thought;
    }
    else
        std::cout << "\nindex out of range, please 0 to 100" << std::endl;
}

std::string Cat::getIdeas(int index) const
{
    return (this->atribute->ideas[index]);
}

Cat::Cat()
{
    this->type = "Cat";
    this->atribute = new Brain();
    std::cout << "Cat default constructor has been called" << std::endl;
}

Cat:: Cat(const Cat& other) : Animal(other)
{
    this->type = "Cat";
    this->atribute = new Brain(*other.atribute);
    this->type = other.type;
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

