/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 15:16:45 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/11 21:47:41 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <cctype>
#include "Animal.hpp"

class Brain 
{
    public:
    std::string ideas[100]; 

    Brain();
    ~Brain();
    Brain&operator=(const Brain& other);
    Brain(const Brain& other);
};

#endif
