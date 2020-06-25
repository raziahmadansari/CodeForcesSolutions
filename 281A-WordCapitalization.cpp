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
	ss >> ch;
	if (int(ch) >= 97)
		cout << char(int(ch) - 32);
	else
		cout << ch;

	while (ss >> ch)
	{
		cout << ch;
	}

	return 0;
}*/