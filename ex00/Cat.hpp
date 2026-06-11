/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 12:08:56 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/11 14:40:12 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <cctype>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
    public:
    
    Cat();
    ~Cat();
    void makeSound() const;
    Cat&operator=(const Cat& other);
    Cat(const Cat& other);
};

#endif