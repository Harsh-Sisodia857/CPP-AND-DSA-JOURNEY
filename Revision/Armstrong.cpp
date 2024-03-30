#include<bits/stdc++.h>
using namespace std;
int main()
  {
      int n;
      cin >> n;
      int Fdigit = n,orignalN = n;
      int countDigit = 0,Armstrong = 0;
      while(Fdigit > 0){
          Fdigit = Fdigit / 10;
          countDigit++;
      }
      while(n > 0){
          int lastDigit = n % 10;
          cout << lastDigit << endl;
          Armstrong += pow(lastDigit, countDigit);
          n = n / 10;
      }
      if(orignalN == Armstrong)
          cout << "Armstrong" << endl;
      else
          cout << "Not Armstrong" << endl;
      return 0;
  }