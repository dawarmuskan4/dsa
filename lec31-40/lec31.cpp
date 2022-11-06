#include<iostream>
using namespace std;

int factorial(int n){
  // base condition
  if(n == 0 ){
    return 1; 
  }

  //recursive relation
  int ans = n * factorial(n-1);
  return ans;
}

int power(int n){
  // base condition
  if(n==0){
    return 1;
  }
  // recursive relation
  return 2 * power(n-1);
}

void count(int n){
  // base condition
  if(n==0){
    return;
  }
  cout << n << " ";
  // recursive relation
  count(n-1);
  cout << n << " ";
}

int main(){
  int n;
  cout<< "Enter n " ;
  cin >> n;

  int ansRec = factorial(n);
  cout << ansRec << endl; 

  int ansPower = power(n);
  cout << ansPower << endl;

  count(n);
  
}