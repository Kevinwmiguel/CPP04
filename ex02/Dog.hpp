/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 11:24:45 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/12 17:20:09 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <cctype>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
    Brain *atribute;

    public:
    
    Dog();
    ~Dog();
    void makeSound() const;
    Dog&operator=(const Dog& other);
    Dog(const Dog& other);
    void setIdeas(int index, std::string thought);
    std::string getIdeas(int index) const;
};

#endif