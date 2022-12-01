#include <iostream>

using namespace std;

int main()
{
        int n;
        cin>>n;
        int y=n/365;
        int yy=n%365;
        int m =yy/30;
        int d =yy%30;
        
        
        cout<<y<<" years"<<"\n";
        cout<<m<<" months"<<"\n";
        cout<<d<<" days"<<"\n";
       
    
   

    return 0;
}
