/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 23:04:57 by mburgler          #+#    #+#             */
/*   Updated: 2023/12/27 23:48:52 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
private:
	std::string	type;
public:
	void	setType(std::string type);
	const std::string& getType(void);
	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);
};

#endif
