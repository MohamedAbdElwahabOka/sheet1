#include <iostream>
#include <string>
#include <cctype>

using namespace std;
// (ch>='A' && ch<='Z')
int main()
{
    char ch;
    cin>>ch;
    if(ch>='a' && ch<='z'){
       ch=ch-32;
       cout<<ch;
        
    }
        
       
    else if(ch>='A' && ch<='Z'){
         ch=ch+32;
         cout<<ch;
    }
       
    
  
    return 0;
}
