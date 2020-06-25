/*#include <iostream>

using namespace std;

int main()
{
	int n, t;
	cin >> n >> t;

	char* ch = new char[n];
	cin >> ch;

	char temp;

	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (ch[j] == 'B' && ch[j + 1] == 'G')
			{
				temp = ch[j];
				ch[j] = ch[j + 1];
				ch[j + 1] = temp;

				j++;
			}
		}
	}

	cout << ch;

	return 0;
}*/