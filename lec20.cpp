#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
  int s= 0; 
  int e= v.size() -1;
  while (s<=e){
    swap(v[s], v[e]);
    s++;
    e--;
  }
  return v;
}

/*void print(vector<int> v){
  for(int i=0; i<v.size(); i++){
    cout << v[i] << " ";
  }
  cout << endl;
}*/

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
  int i=0, j=0;
  int k=0;
  while(i<n && j<m){
    if(arr1[i]<arr2[j]){
      arr3[k++] = arr1[i++];
    }
    else{
      arr3[k++] = arr2[j++];
    }
  }
  // copy first array k elemts ko
  while (i < n){
    arr3[k++] = arr1[i++];
  }
  //copy second array elements
  while(j<m){
    arr3[k++] = arr2[j++];
  }
}

void printArr(int ans[], int n){
  for(int i=0; i<n; i++){
    cout << ans[i] << " ";
  }cout << endl;
}

int main(){
  /*vector<int> v;
  v.push_back(11);
  v.push_back(7);
  v.push_back(3);
  v.push_back(12);
  v.push_back(4);

  vector<int> ans = reverse(v);
  cout << "Printing reverse array " ;
  print(ans); */

  int arr1[5] = {1,3,5,7,9};
  int arr2[4] = {2,4,6};
  int arr3[8] = {0};
  merge(arr1, 5, arr2, 3, arr3);
  printArr(arr3, 8);
}

