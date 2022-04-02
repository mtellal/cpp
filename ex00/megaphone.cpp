#include <iostream>

using namespace std;

void	display(char *s, int space = 0)
{
	int 	i;

	i = 0;
	while (s && s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
			cout << (char)(s[i] - 32);
		else
			cout << s[i];
		i++;
	}
	if (space)
		cout << " ";
}


int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			if (i != argc - 1)
				display(argv[i], 1);
			else
				display(argv[i]);
			i++;
		}
	}
	else
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	cout << endl;
}
