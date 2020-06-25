/*#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	unsigned long long int n;
	cin >> n;

	stringstream ss;
	ss << n;

	int isLucky = 0;

	char ch;
	while (ss >> ch)
	{
		if (ch == '4' || ch == '7')
			isLucky++;
	}


	//cout << "isLucky: " << isLucky << endl;
	
	stringstream ss1;
	ss1 << isLucky;


	while (ss1 >> ch)
	{
		if (ch == '4' || ch == '7')
			continue;
		else
		{
			cout << "NO";
			exit(0);
		}
	}

	cout << "YES";

	return 0;
}*/