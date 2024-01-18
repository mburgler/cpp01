/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:58:07 by mburgler          #+#    #+#             */
/*   Updated: 2024/01/16 02:17:22 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		std::cerr << RED "wrong nmb of arguments\n" << \
			"try " << argv[0] << "<LEVEL>\n" RESET;
		std::exit(1);
	}
	
	Harl harl;
	
	harl.harlFilter
	// harl.complain("DEBUG");
	// harl.complain("INFO");
	// harl.complain("WARNING");
	// harl.complain("ERROR");
	// harl.complain("UNKNOWN");
	return 0;
}
