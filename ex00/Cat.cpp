/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 13:41:13 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/14 23:42:37 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat default constructor has been called" << std::endl;
}

Cat:: Cat(const Cat& other) : Animal(other)
{
    *this = other;
    this->type = "Cat";
    this->type = other.type;
    std::cout << "Cat Copy constructor has been called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat default Destructor has been called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow!" << std::endl;
}

