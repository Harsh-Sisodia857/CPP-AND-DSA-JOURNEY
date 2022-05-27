#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	char del = ',';
    vector<int> s;
    char prev=0;
    int count = 0;
    char word = '\0';
    for(int i = 0; i<str.length(); i++)
    {
        while(str[i] != del){
            count++;
        }
        for(int j = prev; j <=count; j++ )
          word += s[j];
        s.push_back(word);
        prev = count;
        count = 0;
    }   
    return s;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}