/*#include <iostream>

using namespace std;

int main()
{
	int n;
	int answer = 0;
	cin >> n;

	char ch[4];
	
	for (int i = 0; i < n; i++)
	{
		cin >> ch;
		
		//pre increment or decrement
		if (ch[0] == '+' || ch[0] == '-')
		{
			if (ch[0] == '+')
				++answer;
			else
				--answer;
		}
		//post increment or decrement
		else
		{
			if (ch[2] == '+')
				answer++;
			else
				answer--;
		}
	}

	cout << answer;

	return 0;
}*/