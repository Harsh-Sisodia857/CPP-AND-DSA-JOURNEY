#include <iostream>
#include <stack>
#include <vector>
#include <math.h>
#define loop(i, a, b) for (int i = a; i < b; i++)
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long size;
		cin >> size;
		string s;
		stack<char> st;
		cin >> s;
		st.push(s[0]);
		loop(index,1,size)
		{
			if (st.top() == s[index])
			{
				st.pop();
				st.push('0');
			}
			else
				st.push(s[index]);
		}
		if (st.size() == 1)
			cout << "YES" << endl;
		else
		{
			char c = st.top();
			st.pop();
			while (!st.empty() && st.top() == c)
				st.pop();
			if (st.empty())
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
	
	return 0;
}