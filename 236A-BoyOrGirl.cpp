	/*#include <iostream>
	#include <string>
	#include <sstream>

	using namespace std;

	int main()
	{
		int arr[26] = { 0 };
		string s;
		cin >> s;

		stringstream ss(s);

		char ch;
		while (ss >> ch)
		{
			if (arr[int(ch) % 97] == 0)
				arr[int(ch) % 97] = 1;
		}

		int count = 0;
		for (int i = 0; i < 26; i++)
		{
			if (arr[i] != 0)
				count++;
		}

		if (count % 2 == 0)
			cout << "CHAT WITH HER!";
		else
			cout << "IGNORE HIM!";

		return 0;
	}*/