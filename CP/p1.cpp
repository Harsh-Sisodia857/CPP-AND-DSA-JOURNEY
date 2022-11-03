#include <iostream>
#include <cmath>
using namespace std;

int btd(int n)
{
    int num = n;
    int binary = 0;

    int Base = 1;
    int temp = num;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp / 10;

        binary += last_digit * Base;

        Base = Base * 2;
    }

    return binary;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int s;
        int l;
        cin >> l >> s;
        int b = btd(s);
        int idx = 0,prevVal = 0;
        int loop = b;
        for (int i = 1; i <= loop; i++)
        {
            int val = b ^ (b / (1 << i));
            // cout << "value of val : " << val << endl;
            if (val >= b)
            {
                b = val;
                if(prevVal < val){
                    idx = i;
                }
                prevVal = val;
            }
        }
        cout << idx << endl;
    }
    return 0;
}
