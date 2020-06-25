/*#include <iostream>

using namespace std;

int main()
{
	// 1 10 >> 9x >> 6
	// 1 1 >> 1

	int limak, bob;

	cin >> limak >> bob;

	int year = 0;

	if (limak == bob)
	{
		cout << "1";
		exit(0);
	}

	while (true)
	{
		if (limak > bob)
		{
			cout << year;
			break;
		}

		limak = limak * 3;
		bob = bob * 2;
		year++;
	}

	return 0;
}*/