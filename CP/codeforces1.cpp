#include <iostream>
#include <map>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		bool flag = true;
		cin >> n;
		map<int, int> dup_value;
		for (int i = 0; i < 2*n; i++)
		{
			int data;
			cin >> data;
			dup_value[data]++;
			// cout << dup_value[data] << endl;
			if (dup_value[data] > 2)
			{
				flag = false;
			}
		}
		if (flag == true)
		{
			cout << "YES" << endl;
		}
		else
			cout << "NO" << endl;
	}
	return 0;
}
