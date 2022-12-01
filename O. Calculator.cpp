#include <iostream>


using namespace std;

int main()
{
    
  char op;
  float num1, num2;
  cin >> num1 ;
  cin >> op;
  cin >> num2;
  int sum,s,d,a;

  switch(op) {

    case '+':
       sum =num1 + num2;
      cout << sum ;
      break;

    case '-':
     s= num1 - num2;
      cout <<s;
      break;

    case '*':
       d=num1 * num2;
      cout << d ;
      break;

    case '/':
       a=num1 / num2;
      cout << a ;
      break;

    
  }

  
    return 0;
}
