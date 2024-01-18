/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:58:21 by mburgler          #+#    #+#             */
/*   Updated: 2024/01/15 21:25:55 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(){
	std::cout << "Debug message: Mastering the evil laugh. Mwahaha!" << std::endl;
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

void	Harl::complain(){

}