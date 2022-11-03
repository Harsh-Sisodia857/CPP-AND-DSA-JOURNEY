#include <iostream>
using namespace std;

class Human{ 
    protected:   
    string eyeColor;
    public:
    void setEyeColor(string eyeColor){
        this->eyeColor = eyeColor;
    }
    void print(){
        cout<<"Eye color is :"<<this->eyeColor<<endl;
    }
};

class Harsh : public Human{
    public:
    void setEyeColor(){
        this->eyeColor = "Blue";
    }
    public:
    void HarshEyeColor(){
        cout<<"Eye color of harsh is : "<<this->eyeColor;
    }
};

class Manisha : public Harsh{
    public:
    void setEyeColor(){
        this->eyeColor = "Brown";
    }
    public:
    void ManishaEyeColor(){
        cout<<"Eye color of manisha is : "<<this->eyeColor;
    }
};
int main(int argc, char const *argv[])
{
    Human h1;
    h1.setEyeColor("Black");
    h1.print();
    Harsh h2;
    h2.setEyeColor();
    h2.HarshEyeColor();
    Manisha h3;
    h3.setEyeColor();
    h3.ManishaEyeColor();
    return 0;
}
