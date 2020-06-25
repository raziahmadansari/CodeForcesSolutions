/*#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	//cAPSlOCK

	string s;
	cin >> s;

	stringstream ss(s);
	char ch;

	bool isFirstSmall = false;
	bool isAllCapital = true;

	ss >> ch;

	if (int(ch) >= 97)
		isFirstSmall = true;

	if (isFirstSmall)
	{
		stringstream ss1(s);
		ss1 >> ch;

		while (ss1 >> ch)
		{
			if (int(ch) >= 97)
			{
				//cout << "!isAllCapital\n";
				isAllCapital = false;
				break;
			}
		}
	}
	else
	{
		stringstream ss3(s);

		bool isCapital = true;

		while (ss >> ch)
		{
			if (int(ch) >= 97)
				isCapital = false;
		}

		if (isCapital)
		{
			//cout << "everything is capital\n";
			stringstream ss4(s);

			while (ss4 >> ch)
			{
				cout << char(int(ch) + 32);
			}
		}
		else
			cout << s;

		exit(0);
	}

	if (!isAllCapital)
	{
		//there are more than two small letters
		//so print as it is...
		cout << s;
		exit(0);
	}

	if (isAllCapital)
	{
		stringstream ss2(s);

		ss2 >> ch;
		cout << char(int(ch) - 32);

		while (ss2 >> ch)
		{
			cout << char(int(ch) + 32);
		}
	}

	
	


	return 0;
}*/