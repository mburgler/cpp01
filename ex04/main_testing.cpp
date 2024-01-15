/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_testing.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:36:23 by mburgler          #+#    #+#             */
/*   Updated: 2023/12/28 21:15:27 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
# include <sstream>

#include "Colour.hpp"
#include "Sed.hpp"

int	program_main(int argc, char **argv)
{
	if(argc != 4)
	{
		std::cerr << RED "wrong nmb of arguments\n" << \
			"try " << argv[0] << " <filename> <s1> <s2>\n" RESET;
		std::exit(1);
	}
	Sed	sed(argv[1], argv[2], argv[3]);
	sed.errorChecker();
	sed.fileHandler();
	sed.runCore();
	sed.fileCloser();
	return (0);
}

int	fancy_atoi(std::string testing_tester)
{
	int	nmb;
	std::string	input;

	std::getline(std::cin, input);
	std::istringstream iss(input);
	if(std::cin.eof()) {
		std::cout << std::endl;
		std::cout << RED << testing_tester << RESET << std::endl;
		std::exit(1);
	}
	if (!(iss >> nmb)) {
		std::cerr << RED << testing_tester << RESET << std::endl;
		std::exit(1);
	}
	return(nmb);
}

int main()
{
	enum e_choice {NO_ARG, ONE_ARG,TWO_ARG, THREE_ARG, FOUR_ARG, EMPTY_S1, EMPTY_S2, SUBSTRING};
	const char* text[] = {"no argument", "one argument", "two arguments", "three arguments", \
		"four arguments", "empty s1", "empty s2", "substring"};
	std::string testing_tester = "STOP! Really! Why are you trying to break the tester?\nWhat kind of meta stuff is that???";

	std::cout << GREEN "~~~ starting testing mode ~~~" RESET << std::endl;
	std::cout << BLUE "testing with the expression \"zero\"" RESET << std::endl;
	std::cout << "please provide a filename: ";
	std::string input1;
	std::getline(std::cin, input1);
	if(std::cin.eof())
	{
		std::cout << std::endl;
		std::cout << RED << testing_tester << RESET << std::endl;
		std::exit(1);
	}
	for(int i = 0; i < 8; ++i)
	{
		std::cout << std::setw(10) << std::left << i << "|";
		std::cout << text[i] << std::endl;
	}
	std::cout << std::endl;
	std::cout << BLUE "please choose one option: " << RESET;
	int choice = fancy_atoi(testing_tester);
	if(choice == NO_ARG)
	{
		const char* argv[] = {"./sed"};
    	int argc = sizeof(argv) / sizeof(char*);
		std::cout << GREEN "\n~~~ running tests ... ~~~\n" RESET << std::endl;
		program_main(argc, const_cast<char**>(argv));
	}
	else if(choice == ONE_ARG)
	{
		const char* argv[] = {"./sed", input1.c_str()};
    	int argc = sizeof(argv) / sizeof(char*);
		std::cout << GREEN "~~~ running tests ... ~~~" RESET << std::endl;
		program_main(argc, const_cast<char**>(argv));
	}
	else if(choice == TWO_ARG)
	{
		const char* argv[] = {"./sed", input1.c_str(), "zero"};
    	int argc = sizeof(argv) / sizeof(char*);
		std::cout << GREEN "~~~ running tests ... ~~~" RESET << std::endl;
		program_main(argc, const_cast<char**>(argv));
	}
	else if(choice == THREE_ARG)
	{
		const char* argv[] = {"./sed", input1.c_str(), "zero", "0"};
    	int argc = sizeof(argv) / sizeof(char*);
		std::cout << GREEN "~~~ running tests ... ~~~" RESET << std::endl;
		program_main(argc, const_cast<char**>(argv));
	}
	else if(choice == FOUR_ARG)
	{
		const char* argv[] = {"./sed", input1.c_str(), "zero", "0", "0"};
    	int argc = sizeof(argv) / sizeof(char*);
		std::cout << GREEN "~~~ running tests ... ~~~" RESET << std::endl;
		program_main(argc, const_cast<char**>(argv));
	}
	else if(choice == EMPTY_S1)
	{
		const char* argv[] = {"./sed", input1.c_str(), "", "0"};
    	int argc = sizeof(argv) / sizeof(char*);
		std::cout << GREEN "~~~ running tests ... ~~~" RESET << std::endl;
		program_main(argc, const_cast<char**>(argv));
	}
	else if(choice == EMPTY_S2)
	{
		const char* argv[] = {"./sed", input1.c_str(), "zero", ""};
    	int argc = sizeof(argv) / sizeof(char*);
		std::cout << GREEN "~~~ running tests ... ~~~" RESET << std::endl;
		program_main(argc, const_cast<char**>(argv));
	}
	else if(choice == SUBSTRING)
	{
		const char* argv[] = {"./sed", input1.c_str(), "zero", "ze"};
    	int argc = sizeof(argv) / sizeof(char*);
		std::cout << GREEN "~~~ running tests ... ~~~" RESET << std::endl;
		program_main(argc, const_cast<char**>(argv));
	}
	else
	{
		std::cout << RED << testing_tester<< RESET << std::endl;
		std::exit(1);
	}
	std::cout << GREEN "\n~~~ tests complete ~~~\n" RESET << std::endl;
	return(0);
}
