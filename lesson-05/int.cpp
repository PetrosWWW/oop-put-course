#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class abilities{
    protected:
    virtual void displayinfo()=0;
    virtual void givepaw()=0;
    virtual void bark()=0;
    virtual void doatrick()=0;
};
class dog: abilities{
    protected:
    string name;
    float height, weight;
    public:
    dog(string n, float h, float w):name(n), height(h), weight(w){}
    void displayinfo(){
        cout<<this->name<<" "<<this->height<<"m "<<this->weight<<"kg"<<endl;
    }
    void givepaw()override{
        cout<<this->name<<" can give you a paw. "<<endl;
    }
    void bark()override{
        cout<<this->name<<" bark for your command.\n";
    }
    void doatrick()override{
        cout<<this->name<<" can do a lot of tricks:\nshe can sit at your command,\nshe can follow you without lead,\nshe can give you a both paws\nshe can lie down at your command.\n";
    }
};
int main(){
    dog dog("Florka", 0.50, 20.43), dog1("Bartek", 0.45, 21.20);
    dog.displayinfo();
    dog1.displayinfo();
    int n;
    string option;
    cout<<"Choose dog to show options:";
    cin>>option;
    cout<<"1.Can Dog give you a paw?\n2.Can Dog bark for your command?\n3.Show all trick which she can do\n4.Exit.\n";
    while(1){
    cin>>n;
    switch(n){
        case 1:
        if(option=="Florka"){
        dog.givepaw();
        }
        else if(option=="Bartek"){
        dog1.givepaw();
        }
        break;
        case 2:
        if(option=="Florka"){
        dog.bark();
        }
        else if(option=="Bartek"){
        dog1.bark();
        }
        break;
        case 3:
        if(option=="Florka"){
        dog.doatrick();
        }
        else if(option=="Bartek"){
        dog1.doatrick();
        }
        break;
        case 4: return 0;
        default: return 0;
    }
    }
    cout<<endl;
    return 0;
}
