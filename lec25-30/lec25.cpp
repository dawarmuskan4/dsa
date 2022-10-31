#include<iostream>
using namespace std;

int main(){
  int num = 100;
  cout << "Value of num is "<< num << endl;

  int *p = &num;
  (*p)++;
  cout << "Value of num is " << num << endl;
  /*
  cout << "Address of num is " << &num << endl;
  cout << "value of p is " << p << endl;
  cout << "value of *p is " << *p << endl;

  double d= 3.5;
  double *p2 = &d;
  cout << "value of p2 is " << p2 << endl;
  cout << "value of *p2 is " << *p2 << endl;
  cout << "size of int is " << sizeof(num) << endl;
  cout << "size of pointer is " << sizeof(p) << endl;
  cout << "size of pointer is " << sizeof(p2) << endl; */

  int i=3;
  int *t = &i;
  cout << (*t)++ << endl;
}