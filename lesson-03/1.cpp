#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;

class circle{
    private:
    int r;
    public:
    void data(int a){
        this->r=a;
    }
    int R(){
        return r;
    }
};
class actions {
    public:
    float Area(circle a){
        return 2*3.14*a.R();
    }
    float Field(circle a){
        return 3.14*pow(a.R(),2);
    }
};
int main(){
circle object;
actions calculate;
    cout<<"Type r to calculate area and field of circle:";
    int a;
    cin>>a;
    object.data(a);
    cout<<endl<<endl;
    cout<<setprecision(10)<<"Field="<<calculate.Field(object)<<endl<<endl;
    cout<<setprecision(10)<<"Area="<<calculate.Area(object)<<endl<<endl;
    return 0;
}

