/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:58:07 by mburgler          #+#    #+#             */
/*   Updated: 2024/01/16 23:13:15 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include "Colour.hpp"

int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		std::cerr << RED "wrong nmb of arguments\n" << \
			"try " << argv[0] << " <LEVEL>\n" RESET;
		std::exit(1);
	}
	
	Harl harl;
	
	harl.filter(argv[1]);
	return 0;
}
