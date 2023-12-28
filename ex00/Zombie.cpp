/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:59:36 by mburgler          #+#    #+#             */
/*   Updated: 2023/12/27 21:31:22 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << GREEN << name << ": BraiiiiiiinnnzzzZ..." RESET << std::endl;
}

Zombie::Zombie(void) : name("no_name_set")
{
	std::cout << MAGENTA "# calling default contrustor for " << name << RESET << std::endl;
}

Zombie::Zombie(std::string import_name) : name(import_name)
{
	std::cout << MAGENTA "# calling parameter contrustor for " << name << RESET << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << MAGENTA "# calling destructor for " << name << RESET << std::endl;
}
