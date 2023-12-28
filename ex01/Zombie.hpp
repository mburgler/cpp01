/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:59:05 by mburgler          #+#    #+#             */
/*   Updated: 2023/12/28 21:19:55 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <sstream>
#include <limits>
#include <string>
#include <cstdlib>
#include <new>

class	Zombie {
	private:
		int nmb;
		std::string name;
	public:
		Zombie(void);
		~Zombie(void);
		void	announce( void );
		void	name_and_nmb_setter(int i, std::string import_name);
};

//functions
Zombie* zombieHorde( int N, std::string name );

//Colour
#define GREEN "\033[32m"
#define MAGENTA "\033[35m"
#define RESET "\033[0m"

#endif
