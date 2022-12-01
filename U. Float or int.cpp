#include <iostream>
using namespace std;
 
int main()
{
   float num;
   cin>>num;
int n = (int)num;
float n1 = (float)n;
if(num == n1)
{
    cout <<"int "<<n;
}
else
{
   float s = num - n;
    cout <<"float "<<n<<" "<<s;
}
    return 0;
}
