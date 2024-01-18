/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:44:12 by mburgler          #+#    #+#             */
/*   Updated: 2024/01/15 19:01:42 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string filename, std::string s1, std::string s2)
{
	this->filename = filename;
	this->s1 = s1;
	this->s2 = s2;
}

Sed::~Sed()
{
}

void	Sed::errorchecker(void)
{
	if(filename.empty())
	{
		std::cerr << RED "filename cannot be empty\n" RESET;
		std::exit(1);
	}
	if(s1.empty())
	{
		std::cerr << RED "s1 cannot be empty\n" RESET;
		std::exit(1);
	}
}

int	Sed::filehandler(void)
{
    std::ifstream inFile(filename);
    if (!inFile.is_open()) {
        std::cerr << "Could not open file " << filename << std::endl;
        return 1;
    }

    std::ofstream outFile(filename + ".replace");
    if (!outFile.is_open()) {
        std::cerr << "Could not create output file" << std::endl;
        return 1;
    }
}
