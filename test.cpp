#include <iostream>
#include<vector>
using namespace std;

int main() {
	int testcase; cin>>testcase;
	int moneyWanted;
	vector<int> v;
	vector<int> result[testcase];
	for(int j = 0; j < testcase ; j++){
	 int people,moneyInATM; cin>>people>>moneyInATM;
	for(int i = 0; i< people; i++)
	    {
	    cin>>moneyWanted;
	    v.push_back(moneyWanted);
	    }
	if(v[j] < moneyInATM)
	    {
	        moneyInATM = moneyInATM - v[j];
	        result[j].push_back(1);
	    }
	 else{
	     result[j].push_back(0);
	 }
	}
	vector<int>::iterator it = result.begin();
	for(it = result.begin(); it != result.end(); it++){
	    cout<<*it<<" ";
	}
	return 0;
}
