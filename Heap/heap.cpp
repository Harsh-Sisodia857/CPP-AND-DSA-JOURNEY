#include<bits/stdc++.h>
using namespace std;
int main()
  {
      priority_queue<int, vector<int>,greater<int>> pq;
      pq.push(2);
      pq.push(3);
      pq.push(23);
      cout << pq.top();
      return 0;
  }