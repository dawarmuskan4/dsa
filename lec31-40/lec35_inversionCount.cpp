#include<iostream>
using namespace std;

//Inversion Count time complexity - O(N^2)

int inversionCount(int arr[], int n){
  int count = 0;
  for(int i=0; i<n-1; i++){
    for(int j= i+1; j<n; j++){
      if (arr[i] > arr[i + 1]){
        count++;
      }
    }
  }
  return count;
}

int main(){
  int arr[5] = {12,39,10,8,21};
  int ans = inversionCount(arr, 5);
  cout << "Inversion Count is " << ans << endl;
}