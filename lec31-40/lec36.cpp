#include<iostream>
using namespace std;

/*Quick sort notes 
explanation - choose an element and place ot in its right position.
the elements on the left of the rightly placed element should 
be less and elements on the right should be greater than the 
rightly placed element 
steps: 
  1. partition
  2. recursion
algo:
  1. take a pivot
  2. count all elements < pivot 
  3. pivot -> s + count , swap pivot
  4. take two pointers , i on first and j on last position. if the 
  elements shouldn't be there swap and increment i and decrement j 

In-place algorithm
Not stable
Time complexity - 
  Avg n best case - O(nlogn) where n is size of array
  worstcase - O(n^2)
Space complexity - O(n)
*/

int partition(int *arr, int s, int e){
  int pivot = arr[s];

  int count = 0;
  for(int i = s+1; i<=e; i++){
    if(arr[i]<= pivot){
      count++;
    }
  }

  //place pivot at right posiiton
  int pivotIndex = s+count;
  swap(arr[pivotIndex], arr[s]);

  //left and right part
  int i=s, j=e;

  while (i < pivotIndex && j > pivotIndex){
    while(arr[i] < pivot){
      i++;
    }
    while(arr[j]>pivot){
      j--;
    }
    if(i < pivotIndex && j > pivotIndex){
      swap(arr[i++], arr[j++]);
    }
  }
  return pivotIndex;
}

void quickSort(int arr[], int s, int e){
  ///base case
  if(s>=e){
    return;
  }

  //calling partition function
  int p = partition(arr, s, e);

  //left part being sorted
  quickSort(arr, s, p-1);

  //right part being sorted
  quickSort(arr, p+1, e);
}

int main(){
  int arr[10]={2,4,1,6,9,9,9,9,9,9};
  int n=10;

  quickSort(arr, 0, n-1);

  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }cout << endl;
}