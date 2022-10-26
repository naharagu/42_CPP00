#include <iostream>
#include <cctype>
#include <cstring>
using std::cout;
using std::endl;

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
		return (0);
	}

	for (int i = 1; i < argc; i++)
	{
		for (size_t j = 0; j < strlen(argv[i]); j++)
			cout << (char)toupper(argv[i][j]);
	}
	cout << endl;
	return (0);
}
