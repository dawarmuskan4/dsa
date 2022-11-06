#include<iostream>
using namespace std;

int sorted_array(int arr[], int n){
  if(n==0 || n==1){
    return 1;
  }
  if(arr[n-1] < arr[n-2]){
    return 0;
  }
  return sorted_array(arr, n-1);
}

int main(){
  int arr[6] = {27,31,79,42,74,5};
  int arr1[6] = {1,2,3,4,5,6};
  if (sorted_array(arr1, 6)){
    cout << "Sorted" << endl;
  }else{
    cout << "Not sorted" << endl;
  }
}