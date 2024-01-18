int main()
{
	enum e_choice {NO_ARG, ONE_ARG,THREE_ARG, EMPTY_S1, EMPTY_S2, SUBSTRING};
	const char* text[] = {"no argument", "one argument", "three arguments", "empty s1", "empty s2", "substring"};
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
		std::exit(0);
	}
	for(int i = 0; i < 6; ++i)
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

#include <iostream>
#include <string>
#include <iomanip>

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

void Sed::replaceInLine(std::string& line) {
    if (s1.empty())
        return;

    size_t pos = line.find(s1);
    while (pos != std::string::npos) {
        line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
        pos = line.find(s1, pos + s2.length());
    }
}
void Sed::run() {
    std::ifstream infile(filename.c_str());
    std::ofstream outfile((filename + ".replace").c_str());

    // Your file processing code here
}

