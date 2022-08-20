#include<iostream.h>
#include<string.h>
using namespace std;
int main(){

    const string Username="admin";
    const string password="password";
    string Username,password;
    bool user-validated= false;
    do{
        cout<<"insrt Id:";
        cin>>Username;
        if(Username.lenght()<4){
            cout<<"usernam name leght mustbe 4 charactor";
        }
        else{
            cout<<"insert password:";
            cin>>password;
            if(password.lenght()<6){
                cout<<"password leght must be 6 chartor";
            }
            else{
                if (username== USERNAME && password==PASSWORD)
            
             { cout<<"user credentail are correct , granting access"<<end;
             user-validated=true;
                    /* code */
                }
                else{
                    cout<<"wrong "<<end;
                }
                
            }
        }
    }
    while ( user-validated=false);
    
    return 0;
}