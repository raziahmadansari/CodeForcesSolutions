/*#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string s;
	cin >> s;

	stringstream ss(s);

	char ch;
	char hello[] = { 'h', 'e', 'l', 'l', 'o' };
	int length = 0;

	while (ss >> ch)
	{
		if (length == 5)
		{
			cout << "YES";
			exit(0);
		}

		if (hello[length] == ch)
		{
			length++;
			//cout << ch;
		}
	}
	//xqjqmenkodmlhzyzmmvofdngktygbbxbzpluzcohohmalkoeuwfikblltaaigv

	//cout << "\n";

	if (length == 5)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}*/