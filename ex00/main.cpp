/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:59:44 by mburgler          #+#    #+#             */
/*   Updated: 2023/12/28 19:56:55 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string	zombie_name(void)
{
	std::string	name;

	std::cout << "please enter a zombie name"<< std::endl;
	std::getline(std::cin, name);
	return (name);
}

int	main(void)
{
	//STACK ZOMBIE
	std::cout << "~ STACK ZOMBIE via main ~" << std::endl;
	Zombie main_zombie = Zombie(zombie_name());
	main_zombie.announce();

	//HEAP ZOMBIE
	std::cout << "~ HEAP ZOMBIE ~" << std::endl;
	Zombie	*pointer;
	
	pointer = newZombie(zombie_name());
	pointer->announce();
	delete pointer;

	//STACK ZOMBIE
	std::cout << "~ STACK ZOMBIE via randomChump~" << std::endl;
	randomChump(zombie_name());
	return (0);
}
