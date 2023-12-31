/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:59:05 by mburgler          #+#    #+#             */
/*   Updated: 2023/12/27 21:26:38 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <new>

class	Zombie {
	private:
		std::string name;
		Zombie(void);
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce( void );
};

//functions
Zombie* newZombie( std::string name );
void	randomChump(std::string name);

//Colour
#define GREEN "\033[32m"
#define MAGENTA "\033[35m"
#define RESET "\033[0m"

#endif
