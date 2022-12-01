#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;

    cin>>a>>b>>c;
    int maax,miin;
    maax=max(a,b);
    maax=max(maax,c);
    miin=min(a,b);
    miin=min(miin,c);
    
    
    
    cout<<miin<<" "<<maax;

    return 0;
}
