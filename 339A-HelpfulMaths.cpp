/*#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	string str;
	cin >> str;

	stringstream ss(str);

	int i;
	char ch;
	vector<int> myVector;

	while (ss >> i)
	{
		ss >> ch;
		myVector.push_back(i);
	}

	sort(myVector.begin(), myVector.end());

	vector<int>::iterator itr = myVector.begin();

	int vector_size = myVector.size();

	for (int i = 1; i <= vector_size; i++)
	{
		cout << *itr;
		if (i != vector_size)
			cout << ch;
		itr++;
	}

	return 0;
}*/