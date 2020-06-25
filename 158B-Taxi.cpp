/*#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int sum = 0;
	int value;
	vector<int> v;

	for (int i = 0; i < n; i++)
	{
		cin >> value;
		v.push_back(value);
		//sum += value;
	}

	sort(v.rbegin(), v.rend());
	
	int count1 = 0, count2 = 0, count3 = 0, count4 = 0;

	for (int i = 0; i < n; i++)
	{
		if (v[i] == 4)
			count4++;
		else if (v[i] == 3)
			count3++;
		else if (v[i] == 2)
			count2++;
		else
			count1++;
	}

	int no_of_taxi = count4 + count3;

	if (count3 >= count1)
	{	
		count1 = 0;
	}
	else
	{
		count1 = count1 - count3;
	}

	count2 = count2 * 2 + count1;

	if (count2 % 4 != 0)
	{
		no_of_taxi += count2 / 4 + 1;
	}
	else
		no_of_taxi += count2 / 4;

	cout << no_of_taxi;

	return 0;
}*/