/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:58:07 by mburgler          #+#    #+#             */
/*   Updated: 2024/01/16 02:03:39 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl harl;
	std::cout << "[DEBUG]" << std::endl;
	harl.complain("DEBUG");
	std::cout << "[INFO]" << std::endl;
	harl.complain("INFO");
	std::cout << "[WARNING]" << std::endl;
	harl.complain("WARNING");
	std::cout << "[ERROR]" << std::endl;
	harl.complain("ERROR");
	std::cout << "[UNKNOWN]" << std::endl;
	harl.complain("UNKNOWN");
	return 0;
}
