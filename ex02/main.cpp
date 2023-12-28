/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:31:26 by mburgler          #+#    #+#             */
/*   Updated: 2023/12/27 22:51:19 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* strPTR = &str;
	std::string& strREF = str;

	std::cout << std::setw(40) << std::left << "memory address of the string variable: " << &str << std::endl;
	std::cout << std::setw(40) << std::left << "memory address held by stringPTR: " << strPTR << std::endl;
	std::cout << std::setw(40) << std::left << "memory adress held by stringREF: " << &strREF << std::endl;
	std::cout << std::endl;
	std::cout << std::setw(31) << std::left << "value of the string variable: " << str << std::endl;
	std::cout << std::setw(31) << std::left << "value pointed to by stringPTR: " << *strPTR << std::endl;
	std::cout << std::setw(31) << std::left << "value pointed to by stringREF: " << strREF << std::endl;
	
}
