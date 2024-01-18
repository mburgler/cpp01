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
"