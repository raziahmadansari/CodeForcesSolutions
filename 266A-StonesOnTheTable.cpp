/*#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int i;
	cin >> i;

	string s;
	cin >> s;

	stringstream ss(s);
	char ch1, ch2;

	ss >> ch1;
	int count = 0;
	while (ss >> ch2)
	{
		if (ch1 == ch2)
			count++;
		else
			ch1 = ch2;
	}

	cout << count;

	return 0;
}*/