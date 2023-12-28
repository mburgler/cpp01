/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:52:35 by mburgler          #+#    #+#             */
/*   Updated: 2023/12/27 22:22:37 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* ret;

	try
	{
		ret = new Zombie[N];
	}
	catch(const std::bad_alloc& err)
	{
		std::cerr << "zombie allocation failed";
		std::exit(1);
	}
	for(int i = 0; i < N; ++i)
	{
		ret[i].name_and_nmb_setter(i, name);
	}
    return (ret);
}
