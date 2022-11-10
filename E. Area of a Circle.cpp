#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    cout<< fixed<<setprecision(9);
    double r;
    cin >> r;
    double A=3.141592653*r*r;
    cout<<A;
    

    return 0;
}