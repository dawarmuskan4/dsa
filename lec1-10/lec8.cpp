#include<iostream>
#include<math.h>
using namespace std;

/*int power(int a, int b){
  int ans = 1;
  for(int i =1; i<=b; i++){
    ans = ans * a;
  }
  return ans;
}*/

/*bool isEven(int a){
  if(a&1){
    return 0;
  }
  return 1;
} */

/*int factorial(int n){
  int fact = 1;
  for(int i=1; i<=n; i++){
    fact = fact * i;
  }
  return fact;
} */

/*int nCr(int n, int r){2
  int num = factorial(n);
  int den = factorial(r) * factorial(n-r);

  int ans = num / den;
  return ans;
}*/

/*bool isPrime(int n){
  for(int i=2; i<n; i++){
    if(n%i==0){
      return 0;
    }
  }
  return 1;
}*/

/*int fib(int n){
  int sum = 0;
  for(int i=0;i<=n;i++){
    sum = sum + i;
  }
  return sum;
}*/

/*int ap(int n){
  int ans=1;
  for(int i=1;i<=n;i++){
    ans = 3*n + 7;
  }
  return ans;
}*/

/*int decToBin(int n){
  int ans = 0, i = 0;
  while (n != 0){
    int bit = n & 1;
    ans = (bit * pow(10, i)) + ans;
    n = n >> 1;
    i++;
  }
  int sum = 0;
  if(ans&1){
    sum = sum+1;
  }
  return sum;
}*/

/*Count no of 1's in binary number for 2 numbers
int bit(int a){
  int count = 0;
  while(a!=0){
    if(a&1){
      count += 1;
    }
    a=a>>1;
  }
  return count;
}

int count(int a,int b){
  int c = bit(a)+bit(b);
  return c;
} */

/*Pass by value
void dummy(int n){
  n++;
  cout << "n is " << n << endl;
}*/


int main(){

  /*Pass by value
  int n;
  cout << "enter value of n: ";
  cin >> n;

  dummy(n);
  cout << "number n is "<<n<<endl;*/

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
  
  /*Functions
  int a, b;
  cin >> a >> b;
  cout << power(a,b) ;

  int num;
  cout << "Enter value : ";
  cin >> num;
  if(isEven(num)){
    cout << "Number is even" <<endl;
  }
  else{
    cout << "Number is odd" << endl;
  }*/

  /*int n , r;
  cout << "Enter the value of n and r ";
  cin >> n >> r;
  int ans = nCr(n,r);
  cout << ans;*/

  /*Prime number
  int n;
  cout << "Enter a number: ";
  cin >> n;
  if(isPrime(n)){
    cout << n << " is Prime ";
  }
  else{
    cout << n << " is not Prime";
  }*/

  /*Fibonnaci series
  int n;
  cout << "Enter value for n ";
  cin >> n;
  int ans = fib(n);
  cout << ans;*/

  /*AP
  int n;
  cout << "Enter value of n ";
  cin >> n;
  int ans = ap(n);
  cout << ans;*/

  /*Count no of 1's in binary number for 2 numbers
  int a, b;
  cout << "Enter value for a and b ";
  cin >> a >> b;
  int ans = count(a,b);
  cout << ans; */

}