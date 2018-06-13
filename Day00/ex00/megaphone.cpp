#include <iostream>

int            main(int argc, char **argv) {
	int        i;
	int        j;
	char    test;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (argv[i]) {
		j = 0;
		while (argv[i][j]) {
			if (isalpha(argv[i][j]) != 0)
				test = toupper(argv[i][j]);
			else
				test = argv[i][j];
			std::cout << test;
			j++;
		}
		i++;
	}
	std::cout << '\n';
	return (0);
}