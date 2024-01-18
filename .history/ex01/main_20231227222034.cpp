/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:59:44 by mburgler          #+#    #+#             */
/*   Updated: 2023/12/27 22:20:35 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string	zombie_name(void)
{
	std::string	name;

	std::cout << "please enter a zombie name"<< std::endl;
	getline(std::cin, name);
	return (name);
}

int	fancy_atoi(void)
{
	int	nmb;
	std::string	input;

	if (std::getline(std::cin, input)) {
	try {
		nmb = std::stoi(input);
	} catch (const std::invalid_argument& e) {
		std::cerr << "not a number." << std::endl;
		std::exit(1);
	} catch (const std::out_of_range& e) {
		std::cerr << "max/min int violated." << std::endl;
		std::exit(1);
	}
	}
	else
		nmb = 0;
	return(nmb);
}

int	main(void)
{
	std::cout << "how many zombies would you like to allocate? ";
	int nmb = fancy_atoi();
	if(nmb <= 0)
	{
		std::cerr << "negative number or zero." << std::endl;
		std::exit(1);
	}
	Zombie	*zombie_horde_ptr;
	zombie_horde_ptr = zombieHorde(nmb, zombie_name());
	for (int i = 0; i < nmb; ++i) {
        zombie_horde_ptr[i].announce();
	}
	delete[] zombie_horde_ptr;
	return (0);

}
