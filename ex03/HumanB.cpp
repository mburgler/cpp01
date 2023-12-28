/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 23:04:45 by mburgler          #+#    #+#             */
/*   Updated: 2023/12/28 02:40:02 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
}

HumanB::~HumanB()
{
}

HumanB::HumanB()
{
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = weapon;
}

void	HumanB::attack(void)
{
	std::cout << BLUE << name << " attacks with their " << weapon.getType() << RESET << std::endl;
}
