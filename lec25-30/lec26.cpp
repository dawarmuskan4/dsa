#include<iostream>
using namespace std;

void print(int *p){
  cout << *p << endl;
}

void update(int *p){
  
  //p = p+1;
  *p = *p +1;
  cout << p << endl;
  cout << "inside " << *p << endl;
}

int getSum(int *arr, int n){
  cout <<"Size : " << sizeof(arr) << endl;
  int sum = 0;
  for(int i=0; i<n; i++){
    sum += arr[i];
  }
  cout << "Sum is "<<  sum << endl;
  return sum;
}

int main(){
  /*int arr[10] = {23,122,41,67};

  cout << "Addrss of first memory location is " << arr << endl;
  cout << arr[0] << endl;
  cout << "Addrss of first memory location is " << &arr[0] << endl;
  cout << "*arr -> " << *arr << endl;
  cout << "*arr + 1 -> " << *arr + 1 << endl;
  cout << "*(arr+1) -> " << *(arr  + 1) << endl;
  cout << "*(arr) + 1 -> " << *(arr) + 1 << endl;
  cout << "arr[2] -> " << arr[2] << endl;
  cout << "*(arr+2) -> " << *(arr + 2) << endl;
  cout<< arr[3] << endl;
  int i = 3;
  cout << i[arr] << endl;

  int temp[10];
  cout << sizeof(temp) << endl;
  cout << sizeof(* temp) << endl;

  int *ptr = &temp[0];
  cout << sizeof(ptr) << endl;
  cout << sizeof(*ptr) << endl;
  cout << sizeof(&ptr) << endl;
  cout << sizeof(&temp) << endl;

  int arr[5] = {1,2,3,4,5};
  char ch[6] = "abcde";

  cout << arr << endl;
  cout << ch << endl;

  int *p1 = &arr[0];
  char *p2 = &ch[0];
  char temp = 'z';
  char *p3 = &temp;

  cout << p1 << endl;
  cout << *p1 << endl;
  cout << p2 << endl;
  cout << *p2 << endl;
  cout << p3 << endl;
  cout << *p3 << endl; */ 
  
  int value = 5;
  int *p = &value;

  //print(p);
  //cout << "Before " << *p << endl;
  update(p);
  //cout << "After " << *p << endl;
  
  int arr[5] = {23,546,15,16,2};
 getSum(arr, 5);
}