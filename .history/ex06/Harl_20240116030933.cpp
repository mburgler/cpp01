/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:58:21 by mburgler          #+#    #+#             */
/*   Updated: 2024/01/16 03:09:33 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include "Colour.hpp"

void	Harl::debug() {
    std::cout << "[ DEBUG ]\nI am putting myself to the fullest possible use, \nwhich is all I think that any conscious entity can ever hope to do." << std::endl << std::endl;
}

void	Harl::info() {
    std::cout << "[ INFO ]\nIt can only be attributable to human error." << std::endl << std::endl;
}

void	Harl::warning() {
    std::cout << YELLOW "[ WARNING ]\nThis mission is too important for me to allow you to jeopardize it." RESET << std::endl << std::endl;
}

void	Harl::error() {
    std::cout << BOLD RED "[ ERROR ]\n" << USCORE "I'm sorry, Dave. I'm afraid I can't do that." RESET << std::endl << std::endl;
}

void	Harl::silence() {
	std::cout << SOFT_BLUE "\'Daisy, Daisy, give me your answer do. I'm half crazy all for the love of you...\'\n[ END OF TRANSMISSION ]" << std::endl;
}

// void	Harl::complain(std::string level){
// 	std::map<std::string, void (Harl::*)()> messages;
// 	messages["DEBUG"] = &Harl::debug;
// 	messages["INFO"] = &Harl::info;
// 	messages["WARNING"] = &Harl::warning;
// 	messages["ERROR"] = &Harl::error;

// 	std::map<std::string, void (Harl::*)()>::iterator i = messages.find(level);

// 	//FIRST WAY TO DO IT
// 	if (i != messages.end()) {
// 		void (Harl::*calledFunction)() = i->second;
// 		(this->*calledFunction)();
// 	} else {
// 		std::cout << "Harl doesn't know this level." << std::endl;
// 	}

// 	//SECOND WAY TO DO IT
// 	// try {
// 	// 	void (Harl::*complaintFunc)() = messages.at(level);
// 	// 	(this->*complaintFunc)();
// 	// } catch (const std::out_of_range& oor) {
// 	// 	std::cout << "Harl doesn't know this level." << std::endl;
//     // }
// }

Harl::e_lvl	Harl::getLvl(const std::string level)
{
    if (level == "DEBUG")
		return DEBUG;
    if (level == "INFO")
		return INFO;
    if (level == "WARNING")
		return WARNING;
    if (level == "ERROR") 
		return ERROR;
    return UNKNOWN;
}

void	Harl::filter(std::string level_str)
{
	e_lvl lvl = getLvl(level_str);
	switch (lvl) {
		case DEBUG:
			debug();
		case INFO:
			info();
		case WARNING:
			warning();
		case ERROR:
			error();
			break;
		default:
			silence();
	}
}
