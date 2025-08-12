#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	int n ;
	cin >> str >> n;
	for (int l = 0; l < str.size(); l++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int s = 0; s < n * l; s++)
			{
				cout << ".";
			}
			for (int c = 0; c < str.size() - l; c++)
			{
				for (int j = 0; j < i; j++)
				{
					cout << ".";
				}
				for (int j = 0; j < 2 * (n - i) - 1; j++)
				{
					cout << str[l];
				}
				for (int j = 0; j < i + 1; j++)
				{
					cout << ".";
				}
			}
			for (int s = 0; s < n * l; s++)
			{
				cout << ".";
			}
			cout << '\n';
		}
	}

	return 0;
}