/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:36:23 by mburgler          #+#    #+#             */
/*   Updated: 2023/12/28 16:17:21 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Colour.hpp"
#include "Sed.hpp"

int main(int argc, char** argv)
{
	if(argc != 4)
	{
		std::cerr << RED "wrong nmb of arguments\n" << \
			"try " << argv[0] << " <filename> <s1> <s2>\n" RESET;
		std::exit(1);
	}
	Sed	sed = Sed(argv[1], argv[2], argv[3]);
	sed.errorchecker();
}
