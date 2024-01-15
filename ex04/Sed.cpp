/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:44:12 by mburgler          #+#    #+#             */
/*   Updated: 2023/12/28 19:57:55 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string filename, std::string s1, std::string s2)	: filename(filename)
{
	this->s1 = s1;
	this->s2 = s2;
}

Sed::~Sed()
{
}

void	Sed::runCore()
{
	std::string	line;
	while(std::getline(infile, line))
	{
		replaceInLine(line);
		outfile << line << std::endl;
	}
}

void	Sed::replaceInLine(std::string& line)
{
	if(s1.empty())
		return ;
	size_t pos = line.find(s1);
	while(pos != std::string::npos)
	{
		line = line.substr(0, pos) + s2 + line.substr((pos + s1.length()));
		pos = line.find(s1, pos + s2.length());
	}
}

void	Sed::errorChecker(void)
{
	if(filename.empty())
	{
		std::cerr << RED "filename cannot be empty\n" RESET;
		std::exit(1);
	}
	if(s1.empty())
		std::cerr << RED "s1 is empty - just copying\n" RESET;
}

void	Sed::fileHandler()
{
	infile.open(filename.c_str());
	if(!infile.is_open())
	{
		std::cerr << RED "failed to open infile: " << filename << "\n" RESET;
		std::exit(1);
    }
	outfile.open((filename + ".replace").c_str());
	if(!outfile.is_open())
	{
		std::cerr << RED "failed to create outfile: " << filename << "\n" RESET;
		infile.close();
		std::exit(1);
	}
}

void	Sed::fileCloser()
{
	infile.close();
	outfile.close();
}
