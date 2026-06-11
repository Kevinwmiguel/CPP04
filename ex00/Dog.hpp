/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 11:24:45 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/11 14:40:06 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <cctype>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
    public:
    
    Dog();
    ~Dog();
    void makeSound() const;
    Dog&operator=(const Dog& other);
    Dog(const Dog& other);
};

#endif