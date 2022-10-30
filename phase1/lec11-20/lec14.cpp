#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
  int s=0;
  int e=n-1;
  int mid=s+(e-s)/2;

  while(s<e){
    if(arr[mid] >= arr[0]){
      s=mid+1;
    }else{
      e=mid;
    }
    mid = s + (e-s)/2;
  }
  return s;
}

long long int sqrtInt(int n)
{
  int s = 0;
  int e = n;
  long long int mid = s + (e - s) / 2;
  long long int ans = -1;
  while (s <= e)
  {
    long long int square = mid * mid;
    if (square == n)
    {
      return mid;
    }
    if (square < n)
    {
      ans = mid;
      s = mid - 1;
    }
    else
    {
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}

double morePrecision(int n, int precision, int tempSol){
  double factor = 1;
  int ans=tempSol;
  for(int i=0; i<precision; i++){
    factor=factor/10;
    for(double j=ans; j*j<n; j=j+factor){
      ans = j;
    }
  }
  return ans;
}

int main(){
  //int arr1[5] = {3, 0, 10, 17, 2};
  //cout << "Pivot is " << getPivot(arr1, 5) << endl;

  int n;
  cout << "Enter the number " << endl;
  cin >> n;

  int tempSol= sqrtInt(n);
  cout << " Answer is " << morePrecision(n, 3, tempSol);
}