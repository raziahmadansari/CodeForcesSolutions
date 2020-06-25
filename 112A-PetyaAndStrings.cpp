/*#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char s1[101], s2[101];

	cin >> s1;
	cin >> s2;

	for (int i = 0; s1[i] != '\0'; i++)
	{
		if (int(s1[i]) < 95)
			s1[i] += 32;
	}

	for (int i = 0; s2[i] != '\0'; i++)
	{
		if (int(s2[i]) < 95)
			s2[i] += 32;
	}
	
	int result = strcmp(s1, s2);
	cout << result;

	return 0;
}*/