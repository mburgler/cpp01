/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 23:04:53 by mburgler          #+#    #+#             */
/*   Updated: 2023/12/27 23:53:28 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
const std::string& Weapon::getType(void)
{
	return(type);
}
