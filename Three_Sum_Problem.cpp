#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int n = 5; //cin>>n;
    int target = 25; //cin>>target;
    vector<int> v(n) ;
    v.assign({ 10, 3, 8, 7, 4 });
    vector<int>::iterator p1,p2,p3;
    sort(v.begin(),v.end());
    // for(int i = 0; i < v.size(); i++)
    //     cout<<v[i]<<" ";
    bool Sum_exist = false;
    for(p1 = v.begin(); p1 < v.end() ; p1++){
        p2 = p1 + 1; p3 = v.end() - 1;
        int new_target = target - *p1;
        while(p2 < p3){
            
            if((*p2 + *p3) < new_target){
                p2++;
            }
            else if((*p2 + *p3) > new_target){
                p3--;
            }
            else{
                Sum_exist = true;
                cout<<*p1<<" "<<*p2<<" "<<*p3<<endl;
                break;
            }
        }
    }
    if(Sum_exist)
        cout<<"Sum exist";
    else
        cout<<"Sum not exist";
    return 0;
}
