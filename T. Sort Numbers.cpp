#include <iostream>
using namespace std;
 
int main()
{
    int Value1,Value2,Value3;
    cin>>Value1>>Value2>>Value3;
    int First,Second,Third;
    if (Value1 < Value2)
    {
        if (Value1 < Value3)
        {
            if (Value2 < Value3)
            {
                First = Value1;
                Second = Value2;
                Third = Value3;
            }
            else
            {
                First = Value1;
                Second = Value3;
                Third = Value2;
            }
        }
        else // Value3 < Value1
        {
            First = Value3;
            Second = Value1;
            Third = Value2;
        }
    }
    else // Value2 < Value1
    {
        if (Value2 < Value3)
        {
            if (Value1 < Value3)
            {
                First = Value2;
                Second = Value1;
                Third = Value3;
            }
            else
            {
                First = Value2;
                Second = Value3;
                Third = Value1;
            }
        }
        else //Value3 < Value2
        {
            First = Value3;
            Second = Value2;
            Third = Value1;
        }
    }
    
   cout<<First<<"\n"<<Second<<"\n"<<Third<<"\n"<<"\n";
            First = Value1;
            Second = Value2;
            Third = Value3;
  cout<<First<<"\n"<<Second<<"\n"<<Third;
 
    return 0;
}
