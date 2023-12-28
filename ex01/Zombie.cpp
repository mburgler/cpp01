/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:59:36 by mburgler          #+#    #+#             */
/*   Updated: 2023/12/27 22:22:55 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << MAGENTA << "# for Zombie[" << nmb << "] #" RESET << std::endl;
	std::cout << GREEN << name << ": BraiiiiiiinnnzzzZ..." RESET << std::endl;
}

void	Zombie::name_and_nmb_setter(int i, std::string import_name)
{
	nmb = i;
	name = import_name;
}

Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
}
