#include <iostream>

using namespace std;

int main()
{
    long long int A,B,C,D,s=0;
    cin>>A>>B>>C>>D;
    s=((A%100)*(B%100)*(C%100)*(D%100))%100;
    if(s<10)cout << 0<< s << "\n" ;
    else cout << s <<"\n ";
    

    return 0;
}
