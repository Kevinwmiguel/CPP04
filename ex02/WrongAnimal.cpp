/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 20:42:21 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/11 21:22:29 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor has been called" << std::endl;
}

WrongAnimal:: WrongAnimal(const WrongAnimal& other)
{
    *this = other;
    std::cout << "WrongAnimal Copy constructor has been called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal default Destructor has been called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong Bark Bark" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}