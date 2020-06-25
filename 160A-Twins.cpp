/*#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	//int* coin = new int[n];
	int value;
	int sum = 0;

	vector<int> v;

	for (int i = 0; i < n; i++)
	{
		cin >> value;
		sum += value;
		//coin[i] = value;
		v.push_back(value);
	}

	sort(v.rbegin(), v.rend());

	int output = 0;
	int sum1 = 0;
	for (; output < n; output++)
	{
		//cout << v[output];

		sum1 += v[output];

		if (sum1 > (sum - sum1))
		{
			cout << output + 1;
			break;
		}
	}

	//delete[] coin;
	//coin = NULL;

	return 0;
}*/