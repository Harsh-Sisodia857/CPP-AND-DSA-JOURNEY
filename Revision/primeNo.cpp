#include<bits/stdc++.h>
using namespace std;
int main()
  {
      int n;
      cin >> n;
      int flag = 0;
      for (int i = 2; i < sqrt(n); i++){
        if(n % i == 0){
            flag = 1;
        }
      }
      if(flag)
          cout << "Not Prime";
      else
          cout << "Prime";
          return 0;
  }