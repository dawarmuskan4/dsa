#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
  int start = 0;
  int end = n-1;
  int mid = start + (end - start) / 2;

  while (start <= end)
  {
    if(arr[mid]==key){
      return mid;
    }
    
    if(key>arr[mid]){
      start = mid + 1;
    }
    else{
      end =mid -1;
    }
    mid = start + (end - start) / 2;
  }
  return -1;
}

int main(){
  int even[6] = {13,16,29,32,34,76};
  int odd[5]={2,4,6,7,51};

  int index = binarySearch(even, 6, 29);
  cout << "index of 29 is "<< index << endl;

  int ans = binarySearch(odd, 5, 51);
  cout << "index of 51 is " << ans << endl; 

}