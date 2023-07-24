#include <bits/stdc++.h>
using namespace std;
#define abcdefgh signed
abcdefgh main()
{
    int t;
    cin >>t;
    while (t--)
    {
        int countOf10, countOf01, dem;
        int x, y;
        string str;
        dem = 0;
        cin >> str;
        countOf10 = 0;
        countOf01 = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '1' && str[i + 1] == '0')
                countOf10++;
            else if (str[i] == '0' && str[i + 1] == '1')
                countOf01++;
        }
        x = countOf10;
        y = countOf01;
        for (int i = 0; i < str.size(); i++)
        {
            countOf10 = x;
            countOf01 = y;
            if (str[i] == '1')
            {
                if (i == 0)
                {
                    if (str[i + 1] == '0')
                        countOf10--;
                    else
                        countOf01++;
                }
                else if (i == str.size() - 1)
                {
                    if (str[i - 1] == '0')
                        countOf01--;
                    else
                        countOf10++;
                }
                else
                {
                    if (str[i - 1] == '0')
                        countOf01--;
                    else
                        countOf10++;
                    if (str[i + 1] == '0')
                        countOf10--;
                    else
                        countOf01++;
                }
            }
            else
            {
                if (i == 0)
                {
                    if (str[i + 1] == '1')
                        countOf01--;
                    else
                        countOf10++;
                }
                else if (i == str.size() - 1)
                {
                    if (str[i - 1] == '1')
                        countOf10--;
                    else
                        countOf01++;
                }
                else
                {
                    if (str[i + 1] == '1')
                        countOf01--;
                    else
                        countOf10++;
                    if (str[i - 1] == '1')
                        countOf10--;
                    else
                        countOf01++;
                }
            }
            if (countOf10 == countOf01)
                dem++;
        }
        cout << dem << endl;
    }
    return 0;
}