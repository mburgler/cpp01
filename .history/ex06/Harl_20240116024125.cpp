/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:58:21 by mburgler          #+#    #+#             */
/*   Updated: 2024/01/16 02:41:25 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include "Colour.hpp"

void	Harl::debug(){
	
	std::cout << BLUE "Debug message: Testing doomsday device. It's ticklish." RESET << std::endl;
}

void	Harl::info(){
	std::cout << GREEN "Info message: Henchmen auditions today. Bring your own cape." RESET << std::endl;
}

void	Harl::warning(){
	std::cout << YELLOW "Warning message: Running low on evil laughs. Restocking." RESET << std::endl;
}

void	Harl::error(){
	std::cout << BOLD RED "Error message: World map upside down. Plans need revision." RESET << std::endl;
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
			std::cout << "Harl silenced. Goodbye, Dave..." << std::endl;
	}
}
