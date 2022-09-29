#include<iostream>
using namespace std;

/*int getMax(int num[], int n){
  int max = INT16_MIN;
  //max(variable name) = (func)max(max, num[i])
  for (int i=0;i<n;i++){
    if(num[i]>max){
      max=num[i];
    }
  }
  return max;
}

int getMin(int num[], int n){
  int min = INT16_MAX;
  //min(variable name) = (func)min(min, num[i])
  for (int i = 0; i < n; i++){
    if (num[i] < min){
      min = num[i];
    }
  }
  return min;
} */

/*sum of array elements
int sum(int arr[], int size){
  int sum = 0;
  for(int i=0; i<size; i++){
    sum = sum + arr[i];
  }
  return sum;
}*/
 
/* Linear Search
bool search(int arr[],int size, int key){
  for(int i=0; i<size; i++){
    if (arr[i] == key){
      return 1;
    }
  }
  return 0;
}*/

/*Reverse an array
int reverse(int arr[], int size){
  int start = 0;
  int end = size-1;
  while(start <=end){
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
  return 1;
}*/

/*Print an array*/
void printArray(int arr[], int n){
  for (int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main(){
  //take an array input
  int size;
  cout << "Enter the size of the array ";
  cin >> size;

  int num[100];
  cout << "Enter the array elements ";
  for(int i=0; i<size; i++){
    cin >> num[i];
  } 

  //cout << "Sum is " << sum(num, size)<< endl ;
  //cout << "Maximum value is " << getMax(num, size)<< endl;
  //cout << "Minimum value is " << getMin(num, size) << endl;

  /* Linear Search
  int arr[10] = {5,6,8,54,7,81,66,18,26,9};
  int key;
  cout << "Enter the value of key: ";
  cin >> key;
  bool found = search(arr, 10, key);
  if(found){
    cout << "Key is present "<<endl;
  }
  else{
    cout << "Key is not present "<<endl;
  }*/

  /*Reverse an array
  int arr[5] = {5, 6, 8, 54, 7};
  int a[6] = {4,6,1,7,9,3};
  reverse(arr, 5);
  reverse(a, 6) ;
  printArray(arr, 5);
  printArray(a, 6); */
}