#include<iostream>
using namespace std;

void update(int **ptr2){
  /// p=p+1;  no change
  *ptr2 = *ptr2+1;
  **ptr2=**ptr2+1;
}

int main(){
  int i = 5;
  int* ptr1 = &i;
  int** ptr2 = &ptr1;
  cout << "Before " << endl;
  cout << "i " << i <<endl;
  cout << "ptr1 " << ptr1 << endl;
  cout << "ptr2 " << ptr2 << endl;

  update(ptr2);

  cout << "After " << endl;
  cout << "i " << i << endl;
  cout << "ptr1 " << ptr1 << endl;
  cout << "ptr2 " << ptr2 << endl;
}