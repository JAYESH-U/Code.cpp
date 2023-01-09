#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int n, m, k;
		unordered_map<int, int> um;

		cin >> n >> m >> k;

		int a[m], b[k];

		for (int i = 0; i < m; i++)
		{
			cin >> a[i];
			um[a[i]]++;
		}

		for (int i = 0; i < k; i++)
		{
			cin >> b[i];
			um[b[i]]++;
		}

		int uu = 0, ti = 0;
		for (int i = 1; i < n + 1; i++)
		{
			if (um[i] == 0)
				uu++;
			else if (um[i] == 2)
				ti++;
		}

		cout << ti << " " << uu << endl;
	}
	return 0;
}
