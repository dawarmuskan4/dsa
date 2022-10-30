#include <iostream>
using namespace std;

int main(){
  /* CONDITIONAL
  char ch;
  cout << "Enter value for character" ;
  cin >> ch;
  if(ch >= 'a' && ch<='z'){
    cout << "Lowercase"<<endl;
  }
  else if(ch>='A' && ch<='Z'){
    cout << "Uppercase" << endl;
  }
  else if(ch>='0' && ch<='9'){
    cout << "Numeric" << endl;
  }
  else{
    cout << "Invalid input" << endl;
  }*/


  /* WHILE LOOP
  int i=1, n;
  cout << "Enter the value of n: ";
  cin >> n;
  while(i<=n){
    cout << i << endl;
    i++;
  }*/


  /* SUM OF N INTEGERS
  int sum=0 , i=1, n;
  cout << "Enter the value of n ";
  cin >> n;
  while(n>=i){
    sum = sum + i;
    i++;
  }
  cout << sum << endl; */


  /*SUM OF EVEN NUMBERS
  int sum=0, i=2, n;
  cout << "enter the value of n";
  cin >> n;

  while(n>=i){
    sum = sum + i;
    i=i+2;
  }
  cout << sum ; */


  /*FARHENHEIT TO CELCIUS
  float f, c;
  cout << "Enter temp in farhenheit: ";
  cin >> f;

  c = 5*(f-32)/9;
  cout << f << " in F is equal to " << c << " in C" << endl; */

  /*CELSIUS TO FARHENHEIT
  float f, c;
  cout << "Enter temp in C: ";
  cin >> c;

  f = c*9/5 + 32;
  cout << c << " in C is equal to " << f << " in F" << endl; */


  /*PRIME NUMBER
  int i=2, n;
  cout << "Enter a number to check if prime or not: ";
  cin >> n;

  while(n>i){
    if (n%i != 0)
    {
      cout << "Prime for " << i << endl;

    }
    else
    {
      cout << "Not Prime for " << i <<endl;
    }
    i++;
  }*/


  /*Pattern 1 (square)
  int n;
  cout << "Enter n ";
  cin>> n;

  int i=1;
  while(n>=i){
    int j=1;
    while(n>=j){
      cout << "*";
      j=j+1;
    }
    cout << endl;
    i=i+1;
  }*/


  /*Pattern 2 : every col have the row number in a row
  int i =1, n;
  cout << "Enter value of n: ";
  cin >> n;

  while(n>=i){
    int j=1;
    while (n>=j){
      cout << i;
      j=j+1;
    }
    cout << endl;
    i=i+1;
  }*/
} 