/*#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int no;
	cin >> no;

	stringstream ss;
	ss << no;
	
	char ch;
	bool isLucky = true;

	while (ss >> ch)
	{
		if ((ch == '4') || (ch == '7'));
		else
			isLucky = false;
	}

	if (!isLucky)
	{
		for (int i = 4; i <= no / 2; i++)
		{
			if (no % i == 0)
			{
				//cout << i << endl;
				stringstream ss1;
				ss1 << i;
				isLucky = true;

				while (ss1 >> ch)
				{
					//cout << ch << endl;
					if ((ch == '4') || (ch == '7'));
					else
						isLucky = false;
				}

				if (isLucky)
					break;
			}
		}
		if (isLucky)
			cout << "YES";
		else
			cout << "NO";
	}
	else
		cout << "YES";

	return 0;
}*/