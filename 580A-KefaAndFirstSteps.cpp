#include <iostream>

using namespace std;

int main()
{
	long long int n;
	cin >> n;

	long long int* arr = new long long int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int max = 0, length = 0;
	bool insideElse = false;

	for (int i = 0; i < n - 1; i++)
	{
		//cout << arr[i] << " " << arr[i + 1] << "\n";
		if (arr[i] <= arr[i + 1])
		{
			//cout << "inside if\n";
			length++;
		}
		else
		{
			//cout << "inside else\n";

			insideElse = true;
			if (max == 0)
			{
				max = length;
				length = 0;
			}
			else if (max < length)
			{
				max = length;
				length = 0;
			}
		}
	}

	if (length > max)
		cout << length + 1;
	else
		cout << max + 1;

	delete[] arr;
	arr = NULL;

	return 0;
}