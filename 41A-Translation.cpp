/*#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string s1, s2;
	cin >> s1;
	cin >> s2;

	int l1 = s1.length();
	int l2 = s2.length();

	if (l1 == l2)
	{
		stringstream ss1(s1);
		stringstream ss2(s2);
		char temp1, temp2;

		char* ch1 = new char[l1 + 1];
		char* ch2 = new char[l2 + 1];

		int i = 0;

		while (ss1 >> temp1)
		{
			ss2 >> temp2;

			ch1[i] = temp1;
			ch2[i] = temp2;

			i++;
		}

		bool isEqual = true;

		for (i = 0; i < l1; i++)
		{
			//cout << "ch1: " << ch1[i] << "  ch2: " << ch2[l1 - i - 1] << "\n";
			if (ch1[i] != ch2[l1 - i - 1])
			{
				isEqual = false;
				break;
			}
		}

		if (isEqual)
			cout << "YES";
		else
			cout << "NO";

		delete[] ch1, ch2;

		ch1 = NULL;
		ch2 = NULL;
	}
	else
		cout << "NO";

	return 0;
}*/