/*#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string s;
	cin >> s;

	stringstream ss(s);
	char ch;

	bool giveOutput = false;

	while (ss >> ch)
	{
		switch (ch)
		{
		case 'H':
			cout << "YES";
			giveOutput = true;
			exit(0);
		case 'Q':
			cout << "YES";
			giveOutput = true;
			exit(0);
		case '9':
			cout << "YES";
			giveOutput = true;
			exit(0);
		}
	}

	if (!giveOutput)
		cout << "NO";

	return 0;
}*/