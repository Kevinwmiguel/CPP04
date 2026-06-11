/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 01:24:35 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/11 14:45:44 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "The Animal Constructor was called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "The Animal Destructor was called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

Animal::Animal(const Animal& other)
{
    *this = other;
    std::cout << "The Animal Copy Constructor was called" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal:: makeSound() const
{
    std::cout << "Some animal sound" << std::endl;
}
