/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:07:45 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/26 18:32:25 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
    protected:
        std::string *ideas;
    public:
        Brain(void);
        Brain(Brain &copy);
        Brain& operator=(const Brain &rightValue);
        virtual ~Brain();

        std::string *getIdeas();        
};

#endif