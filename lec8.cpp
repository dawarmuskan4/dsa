#include<iostream>
using namespace std;

int main(){

  /* this while condition will always be true if exit( is not put.)
  while (1)
  {
    cout << "HOW YOU DOIN????" << endl;

    int num = 1;
    switch (num)
    {
    case 1:
      cout << "I'M FINE" << endl;
      break;
    }
    exit(0);
  }
  }

ANSWER : BY PUTTING EXIT(0), WE CAN EXIT OUT OF INFINITE LOOP.

WHY WE CAN'T USE CONTINUE STATEMENT IN CASE OF SWITCH CASE?
ANS: CONTINUE CAN'T BE USED IN CASE OF SWITCH CASE BECAUSE 
AS THE CASE CONSTANT MATCHES WITH THE USERS INPUT THE FLOW 
WILL COME DOWN AND TRY TO EXECUTE BUT BECAUSE OF CONTINUE 
IT WILL SKIP THAT PART AND ITERATION WILL GO ON AND ON. 
THAT'S WHY WE USE BREAK , TO STOP  AT THE POINT ONCE WE 
EXUCUTE OUR PART.*/

  /*Calculator
    int a,b;
    char op;
    cout << "Enter value of a and b" << endl;
    cin >> a >> b;
    cout << "enter operator";
    cin >> op;
    switch(op){
      case '+':cout << a+b <<endl ;
        break;
      case '-':cout << a-b <<endl ;
        break;
      case '*':cout << a*b <<endl ;
        break;
      case '/':cout << a/b <<endl ;
        break;
      case '%':cout << a%b <<endl;
        break;
      default : cout << "Enter valid operation";
    }*/

  /*Using switch cases, print the no of notes you need for any given input
  int amount;
  cout << "Enter the amount ";
  cin >> amount;

  int rs100, rs50, rs20, rs10;

  switch (1)
  {
  case 1:
    rs100 = amount /100;
    amount = amount % 100;
    cout << "No of 100 rupees notes required are " << rs100 << endl;

  case 2:
    rs50 = amount / 50;
    amount = amount % 50;
    cout << "No of 50 rupees notes required are " << rs50 << endl;

  case 3:
    rs20 = amount / 20;
    amount = amount % 20;
    cout << "No of 20 rupees notes required are " << rs20 << endl;

  case 4:
    rs10 = amount / 10;
    amount = amount % 10;
    cout << "No of 10 rupees notes required are " << rs10 << endl;
  }*/
}