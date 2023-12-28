/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:59:41 by mburgler          #+#    #+#             */
/*   Updated: 2023/12/27 21:26:47 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie* ret;

	try
	{
		ret = new Zombie(name);
	}
	catch(const std::bad_alloc& err)
	{
		std::cerr << "zombie allocation failed";
		std::exit(1);
	}
	
    return (ret);
}
