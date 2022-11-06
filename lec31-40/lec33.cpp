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

void printBS(int arr[], int s, int e){
  for(int i=s; i<=e; i++){
    cout << arr[i] << " " ;
  }cout << endl;
}

bool binarySearch(int arr[], int s, int e, int key){
  cout << endl;
  printBS(arr, s, e);
  
  //basecase for element not found
  if(s>e){
    return false;
  }

  int mid = s + (e-s)/2;
  cout << "value of mid element " << arr[mid] << endl;
  // base case for element found
  if (arr[mid] == key){
    return true;
  }

  if(arr[mid] < key){
    return binarySearch(arr, mid+1, e, key);
  }
  else{
    return binarySearch(arr, s, mid-1, key);
  }
}

int main(){
  int arr[11] = {2,4,6,10,14,18,22,38,49,55,222};
  int size = 11;
  int key = 222;
  
  //if(sortedArray(arr, 6)){
  //  cout << "Sorted " << endl;
  //}else{
  //  cout << "Unsorted" << endl;
  //}
  //int ans = sumArr(arr, 6);
  //cout << "Sum is " << ans << endl;
  
  cout << endl;
  //bool ans = linearSearch(arr, size, key);
  //if(ans){
  //  cout << "Present" <<endl;
  //}else{
  //  cout << "Not Present" << endl;
  //}

  if (binarySearch(arr, 0, 10, key)){
    cout << "Present" << endl;
  }
  else{
    cout << "Not present" << endl;

  }
}