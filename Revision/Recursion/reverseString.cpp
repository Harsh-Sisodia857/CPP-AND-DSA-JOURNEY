#include<bits/stdc++.h>
using namespace std;

void reverseString(string s){
    if(s.length() == 0){
        return;
    }
    reverseString(s.substr(1));
    cout << s[0];
}
int main()
  {
      string s;
      cin >> s;
      reverseString(s);
      return 0;
  }