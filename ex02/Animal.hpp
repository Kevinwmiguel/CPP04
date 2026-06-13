/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 01:30:53 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/12 16:43:28 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
    std::string type;

    public:
    Animal();
    virtual ~Animal();
    Animal&operator=(const Animal& other);
    Animal(const Animal&other);
    
    virtual void makeSound() const = 0; // ← Pure virtual (no implementation)
    std::string getType() const;
};

#endif