#include <iostream>
using namespace std;
class planet{
    string name;
    int d;
    string unit;
    public:
    planet(){
        this->name = " ";
        this->d = 0;
        this->unit = "km";
    }
    planet(string _unit):planet(){
        this->unit = _unit;
    }
    planet(string _name, int _d, string _unit){
        name = _name;
        d = _d;
        unit = _unit;
    }    
    int getd(){
        return this->d;
    }
    string getname(){
        return this->name;
    }
    string getunit(){
    return this->unit;
}
};
int main(){
    planet Universe;
    planet unit("m");
    planet Mercury("Mercury", 20000, "km");
    planet Mars("Mars", 9093209, "km");
    planet Earth("Earth", 12756, "km");
    cout<<"Your planets in Universe:"<<endl;
    cout<<"Name: "<<Mercury.getname()<<endl;
    cout<<"Diameter: "<<Mercury.getd()<<" "<<unit.getunit()<<endl;
    cout<<"Name: "<<Mars.getname()<<endl;
    cout<<"Diameter: "<<Mars.getd()<<" "<<unit.getunit()<<endl;
    cout<<"Name: "<<Earth.getname()<<endl;
    cout<<"Diameter: "<<Earth.getd()<<" "<<Earth.getunit()<<endl<<endl;
    cout<<unit.getd();
    return 0;
}

