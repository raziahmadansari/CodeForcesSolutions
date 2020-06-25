/*#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	char arr[101];
	cin >> arr;
	
	vector<int> v;

	char ch = arr[0];
	int count = 1;

	for (int i = 1; arr[i] != '\0'; i++)
	{
		if (arr[i] == ch)
			count++;
		else
		{
			ch = arr[i];
			v.push_back(count);
			count = 1;
		}
	}
	v.push_back(count);

	sort(v.rbegin(), v.rend());
	vector<int>::iterator itr = v.begin();
	//for (; itr != v.end(); itr++)
	//	cout << *itr << " ";

	if (*itr >= 7)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}*/