#include<iostream>
using namespace std;

int sortedArray(int arr[], int n){
  if(n==0 || n==1){
    return 1;
  }
  if(arr[n-1]<arr[n-2]){
    return 0;
  }
  int ans = sortedArray(arr, n-1);
  return ans;
}

int sumArr(int arr[], int n){
  
  if(n==0){
    return 0;
  }
  if(n==1){
    return arr[0];
  }
  int remainingPart = sumArr(arr, n-1);
  int sum = arr[n-1] + remainingPart;
  return sum;
}

void print(int arr[], int n){
  cout << "Size of array is " << n <<endl;
  for(int i=0; i<n; i++){
    cout << arr[i] << " " ;
  }
  cout << endl;
}

bool linearSearch(int arr[], int size, int key){
  print(arr, size);
  // base case
  if (size == 0){
    return false;
  }
  if(arr[0] == key){
    return true;
  }else{
    bool remainingPart = linearSearch(arr+1, size-1, key);
    return remainingPart;
  }
} 

int main(){
  int arr[6] = {12,42,6,29,11,14};
  int size = 6;
  int key = 9;
  //if(sortedArray(arr, 6)){
  //  cout << "Sorted " << endl;
  //}else{
  //  cout << "Unsorted" << endl;
  //}
  //int ans = sumArr(arr, 6);
  //cout << "Sum is " << ans << endl;
  cout << endl;
  bool ans = linearSearch(arr, size, key);
  if(ans){
    cout << "Present" <<endl;
  }else{
    cout << "Not Present" << endl;
  }
}