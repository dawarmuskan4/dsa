#include<iostream>
using namespace std;

int fibonnaci(int n){
  if(n <= 1){
    return n;
  }
  int res1 = fibonnaci(n - 1);
  int res2 = fibonnaci(n - 2);
  return res1+res2;
}

int main(){
  int n;
  cout << "Enter n " ;
  cin >> n;

  int ans = fibonnaci(n);
  cout << "Fibonnaci series is " << ans << endl;
}