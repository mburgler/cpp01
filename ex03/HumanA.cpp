/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 23:04:39 by mburgler          #+#    #+#             */
/*   Updated: 2023/12/28 12:14:50 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
}

HumanA::HumanA(void)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void)
{
	std::cout << RED << name << " attacks with their " << weapon.getType() << RESET << std::endl;
}
