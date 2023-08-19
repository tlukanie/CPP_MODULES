/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedForLosers.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:02:47 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/19 20:38:01 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDFORLOSERS_HPP
#define SEDFORLOSERS_HPP

#include <iostream>
#include <fstream>

class SFLfile
{
    private:
        std::string infile;
        std::string outfile;
    public:
        SFLfile(std::string filename);
        ~SFLfile();
        void replacer(std::string s1, std::string s2);
};

#endif