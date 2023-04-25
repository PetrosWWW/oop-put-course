#include <iostream>
#include <memory>
#include <sstream>
#include <cassert>
#include <string>

using namespace std;
class sequence{
    public:
    virtual int length()=0;
    class fake;
};
class sequence::fake:public sequence{
public:
    int length()override{return 100;};
};
class gene{
private:
    string name_;
    shared_ptr<sequence>seq_;
    string JSON() const{
    stringstream ss;
    ss<<"{";
    ss<<"\ "name\ ": ""<< name_ <<"\", ";
    ss<<"\"length\": "<<seq_->lenght();
    ss<<"}";
    return ss.str();
    };
public:
    gene(string name,shared_ptr <sequence>seq):name_(name),seq_(seq){};
};

int main(){
    shared_ptr<sequence::fake>fakeseq=make_shared<sequence::fake>();
    gene gene("BATF5",fakeseq);
    cout<<gene.JSON();
    return 0;
}
