#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; 
	cin >> t;
	while (t--)
	{
		long long x, d; 
		cin >> x >> d;

		long long final_pos; 

		
		if (d % 4 == 1)
			final_pos = -d; 
		else if (d % 4 == 2)
			final_pos = 1; 
		else if (d % 4 == 3)
			final_pos = d + 1; 
		else if (d % 4 == 0)
			final_pos = 0;

		if (x % 2 == 0)
			final_pos = x + final_pos; 
		else
			final_pos = x - final_pos; 

		cout << final_pos << endl; 
	}
	return 0;
}

