
#include <iostream>

using namespace std;

int main()
{
   int n1,n2,n3,n4;
   cin>>n1>>n2>>n3>>n4;
   int s,e;
   if((n3<n1&&n4<n1)||(n3>n2&&n4>n2)){
       cout<<-1<<"\n";
   }else{
       if(n1>n3){
           s=n1;
       }else{
           s=n3;
       }
      if(n2>n4){
       e=n4;
   }else{
       e=n2;
       
   }
   cout<<s<<" "<<e<<"\n";
   }
    
    
    return 0;
    
    
}
