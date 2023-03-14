#include <iostream>
#include <string>
using namespace std;
class library{
public:
string nameofbook;
};
class friends{
    public:
    string fname;
    string sname;
    int id;
    void addfriend(){
        id++;
        cin>>fname>>sname;
    }
    void display(){
        cout<<fname<<" "<<sname<<endl;
    }
};
// to improve: menu implementation.
class library collection[20];
class friends list[20];
int main()
{
    int option;
    cout<<"Choose the option:"<<endl<<"1.Books Collection"<<endl<<"2.Friends list"<<endl;
    cin>>option;
    if(option==1){
        while(1){
        int n;
        cout<<endl<<endl<<"Options"<<endl<<endl<<"1.Add a book"<<endl<<"2.Display"<<endl<<"3.End process"<<endl;
        cin>>n;
        switch (n)
        {
        case 1:
            int val;
            cout<<"How many books u want to add?"<<endl;
            cin>>val;
            for(int i=0;i<val;i++){
                cout<<"Enter a book name with '-' :";
                cin>>collection[i].nameofbook;
            }
            continue;
        case 2:
            int num;
            cout<<"How many books do u want to display?"<<endl;
            cin>>num;
            for(int i=0;i<num;i++){
                cout<<collection[i].nameofbook<<endl;
            }
            continue;
        case 3: return 0;
        default:
            break;
        }
        return 0;
        }
        }
    if(option==2){
        while(1){
            int n;
            cout<<"How many friends do u want to add:\n";
            cin>>n;
            for(int i=1;i<=n;i++){
            cout<<"Write name, secound name of ur friend!\n";
            list[i].addfriend();
            }        
     int option;
     cout<<"Do u want to display information of friend?\n1.Y\n2.N\n";
     cin>>option;
     switch(option){
         case 1:
         label1:
             cout<<"Which friend do u want to display, write a index of ur friend\n"; 
             int i;
             cin>>i;
             list[i].display();
            case 2: 
            label2:
         int end;
         cout<<"Do u want to end program?\n1.Y\n2.N\n";
         cin>>end;
            switch(end){
            case 1: return 0;
            case 2: cout<<"What do u want to do next?\n1.Add\n2.Display\n3.End\n";
            int a;
            cin>>a;
         switch(a){
             case 1:continue;
             case 2:goto label1;
             case 3:return 0;
         }
     }
     }
        }
    }
}