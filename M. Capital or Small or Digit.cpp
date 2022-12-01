#include <iostream>
#include <string>

using namespace std;

int main()
{
    char ch;
    cin>>ch;
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        cout<<"ALPHA"<<"\n";
        if(isupper(ch)){
            cout<<"IS CAPITAL";
        }else{
            cout<<"IS SMALL";
        }
        
    }
        
       
    else{
         cout<<"IS DIGIT";
    }
       
    
  
    return 0;
}
