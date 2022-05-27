#include<iostream>
using namespace std;
class student{
    // BY DEFAULT DATA MEMBERS ARE PRIVATE TO MAKE PUBLIC MENTION PUBLIC
    string name; 
    public:
    int age;
    bool gender;
    //Parameterized Constructor
    student(string s,int a,int g){
        cout<<"Parameterized Constructor"<<endl;
        name = s;
        age = a;
        gender = g;
    }
    // If we don't give value while making object then default constructor is call if you don't make it, it would create error
    //Default Constructor
    student(){
        cout<<"Default Constructor"<<endl;
    }
    // To copy values of a object to another we make copy constructor
    student(student &a){
        cout<<"Copy Constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    // Operator Overloading
    // bool operator operator_name 
    bool operator == (student &a){
        if(name == a.name && age == a.age && gender == a.gender)
            return true;
        return false;
    }
    // Setter function
    void setName(string s){
        name = s;
    }
    //Getter function
    void getName(){
        cout<<name<<endl;
    }
    void printinfo(){
        cout<<"Name =";
        cout<<name<<endl;
        cout<<"Age =";
        cout<<age<<endl;
        cout<<"Gender =";
        cout<<gender<<endl;
    }
};
int main(int argc, char const *argv[])
{
    // student arr[3];
    // a.name = "Manisha";
    // a.age = 20;
    // a.gender = 0;
    // for(int i = 0; i<3; i++){
    //     string s;
    //     cout<<"Name =";
    //     cin>>s;
    //     arr[i].setName(s);
    //     cout<<"Age =";
    //     cin>>arr[i].age;
    //     cout<<"Gender =";
    //     cin>>arr[i].gender;
    // }
    // for(int i = 0; i<3; i++)
    //     arr[i].printinfo();

    // While declaring object if we want to give values directly then we have to make constructor
    student a("Harsh",20,1);
    a.printinfo();
    student b;
    // student c = a or student c(a) both are same
    student c(a);
    if(c==a)
        cout<<"Same"<<endl;
    else
        cout<<"Not Same"<<endl;
    return 0;
}
