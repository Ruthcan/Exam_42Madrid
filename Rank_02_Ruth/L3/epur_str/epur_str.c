#include <unistd.h>
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		int space = 0;
		while (argv[1][i])
		{
			while (argv[1][i] == ' ' || argv[1][i] == '\t')
				i++;
			while (argv[1][i])
			{
				if (argv[1][i] == ' ' || argv[1][i] == '\t')
					space = 1;
				if (argv[1][i] != ' ' && argv[1][i] != '\t')
				{
					if (space)
						write(1, " ", 1);
					space = 0;
					write (1, &argv[1][i], 1);
				}
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}