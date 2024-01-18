/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:58:21 by mburgler          #+#    #+#             */
/*   Updated: 2024/01/15 21:30:32 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(){
	std::cout << "Debug message: Testing doomsday device. It's ticklish." << std::endl;
}

void	Harl::info(){
	std::cout << "Info message: Henchmen auditions today. Bring your own cape." << std::endl;
}

void	Harl::warning(){
	std::cout << "Warning message: Running low on evil laughs. Restocking." << std::endl;
}

void	Harl::error(){
	std::cout << "Error message: World map upside down. Plans need revision." << std::endl;
}

void	Harl::complain(std::string level){
	std::map<std::string, void (Harl::*)()> messages;
    complaints["DEBUG"] = &Harl::debug;
    complaints["INFO"] = &Harl::info;
    complaints["WARNING"] = &Harl::warning;
    complaints["ERROR"] = &Harl::error;

}