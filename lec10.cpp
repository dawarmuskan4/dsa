#include<iostream>
using namespace std;

//print array function
void printArray(int arr[], int n){
  for(int i=0; i< n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

/* swap alternate array elements
void swapElements(int num[], int size){
  for (int i = 0; i < size; i += 2){
    if (i + 1 < size){
      swap(num[i], num[i + 1]);
    }
  }
} */

int main(){
  //take array elements input
  int size;
  cout << "Enter the size of the array ";
  cin >> size;

  int num[100];
  cout << "Enter the array elements ";
  for (int i = 0; i < size; i++){
    cin >> num[i];
  }
  
  //swapElements(num, size);
  //printArray(num,size);
  
}