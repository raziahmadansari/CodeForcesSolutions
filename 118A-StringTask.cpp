/*#include <iostream>

using namespace std;

//xnhcigytnqcmy

int main()
{
	char str[100];
	cin >> str;

	char vowel[] = { 'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y' };
	bool isVowel = false;

	for (int i = 0; str[i] != '\0'; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			if (str[i] == vowel[j])
			{
				isVowel = true;
				break;
			}	
		}

		if (!isVowel)
		{
			cout << ".";
			
			if (int(str[i]) < 97)
				cout << char(int(str[i]) + 32);
			else
				cout << str[i];
		}

		isVowel = false;
	}

	return 0;
}*/