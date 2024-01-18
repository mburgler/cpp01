/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:44:15 by mburgler          #+#    #+#             */
/*   Updated: 2024/01/15 19:03:13 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SED_HPP
# define SED_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <fstream>
#include "Colour.hpp"

class Sed
{
private:
	std::string filename;
	std::ifstream inFile;
	std::ofstream outFile;
	std::string s1;
	std::string s2;
public:
	void	errorchecker();
	void	filehandler(void);
	Sed(std::string filename, std::string s1, std::string s2);
	~Sed();
};

#endif
