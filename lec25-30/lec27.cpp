#include<iostream>
using namespace std;

void update(int *p){
  /// p=p+1;  no change
  // *ptr2 = *ptr2+1;
  // **ptr2=**ptr2+1;

  *p = (*p)*2;
}

void increment(int **p){
  ++(**p);
}

int main(){
  int i = 5;
  int* ptr1 = &i;
  int** ptr2 = &ptr1;
  cout << "Before " << endl;
  cout << "i " << i <<endl;
  cout << "ptr1 " << ptr1 << endl;
  cout << "ptr2 " << ptr2 << endl;

  //update(ptr2);

  cout << "After " << endl;
  cout << "i " << i << endl;
  cout << "ptr1 " << ptr1 << endl;
  cout << "ptr2 " << ptr2 << endl;
//q1
  int first = 8; 
  int second = 18;
  int *ptr = &second;
  *ptr = 9;
  cout << first << " " << second << endl; // ans - 8 9
//q2
  int a = 6;
  int *p = &a;
  int *q= p;
  (*q)++;
  cout << a << endl; // ans - 7

  // q3
  int b=8;
  int *p1 = &b;
  cout << (*p1)++ << " ";
  cout << b << endl; // ans - 8 9 the value is printed fitst and then incremented

  // q4
  int *p2=0;
  int c=110;
  *p2 = c;
  cout << *p2 << endl; // segmentation fault.. in case of null pointer initialization should be like
                      // int *p=0; p=&i;

  // q5
  int d = 8;
  int e = 11;
  int *f=&e;
  d = *f;
  *f = *f + 2;
  cout << d << " " << e << endl; // ans - 11 13

  // q6
  float f1 = 12.5;
  float p3 = 21.5;
  float *ptr = &f1;
  (*ptr)++;
  *ptr = p3;
  cout << *ptr << " " << f1 << " " << p3 << endl; // ans - 21.5 21.5 21.5

  // q7
  int arr[5];
  int *ptr1;
  cout << sizeof(arr) << " " << sizeof(ptr2) << endl; // ans - 20 8

  // q8
  int arr1[]= {11,21,13,14};
  cout << *(arr1) << " " << *(arr1+1) << endl; // ans - 11 21

  // q9
  int arr2[6] = {11,12,31};
  cout << arr2 << " " << &arr2 << endl; //ans- addressof 0Th location

  // q10
  int arr2[6] = {11, 12, 31};
  cout << (arr2+1) << endl; // ans - address of 1st array element

  // q11
  int arr2[6] = {11, 12, 31};
  int *p3 = arr2;
  cout << p[2] << endl; // ans- 31

  // q12
  int arr4[] = {11,12,13,14,15};
  cout << *(arr) << " " << *(arr+3); // ans - 11 14

  // q13
  int arr5[]={11,21,31,41};
  //int *ptr3= arr5++; // array can't be updated..throws error
  //cout << *ptr3 << endl;

  // q14
  char ch = 'a';
  char *ptr = &ch;
  ch++;
  cout << *ptr << endl; //ans - b

//q15
  char arr6[]= "abcde";
  char *p = &arr6[0];
  cout << p << endl; // ans - abcde

  // q16
  char arr6[] = "abcde";
  char *p = &arr6[0];
  p++; 
  cout << p << endl; //ans- bcde

  // q17
  char str[]= "babbar";
  char *p1 = str;
  cout << str[0] << " " << p[0] << endl; // b b

  // q18
  int g=10;
  update(&g);
  cout << g << endl; // ans - 20

  // q19
  int h=110;
  int *p4 = &h;
  int **q = &p4;
  int j= (**q)++ + 9;
  cout << h << " " << j << endl; //ans - 111 119

  // q20
  int k = 100;
  int *p5 = &k;
  int **q2= &p5;
  int l = ++(**q);
  int *r = *q;
  ++(*r);
  cout << k << " " << l << endl; //102 101

  // q21
  int num = 110;
  int *ptr3 = &num;
  increment(&ptr3);
  cout << num << endl; // ans - 111
} 