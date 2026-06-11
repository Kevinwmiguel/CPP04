/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 20:42:37 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/11 21:21:22 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
    std::string type;

    public:
    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal&operator=(const WrongAnimal& other);
    WrongAnimal(const WrongAnimal&other);
    void makeSound() const;
    std::string getType() const;
};

#endif