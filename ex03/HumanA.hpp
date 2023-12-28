/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 23:04:42 by mburgler          #+#    #+#             */
/*   Updated: 2023/12/28 14:23:45 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA {
private:
	std::string	name;
	Weapon&	weapon;
	HumanA();
public:
	void	attack(void);
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
};

#define RED "\033[31m"
#define RESET "\033[0m"

#endif
