#include <iostream>
using namespace std;

int main(){
  /*Pattern 3: row contains: 1 to no of col
  int i =1, n;
  cout << "Enter the value of n : ";
  cin >> n;
  while(n>=i){
    int j=1;
    while(n>=j){
      cout << j << " ";
      j = j+1;
    }
    cout << endl;
    i=i+1;
  }*/

  /*Pattern4 : reverse of pattern 3
  int i = 1, n;
  cout << "Enter the value of n : ";
  cin >> n;
  while (n >= i)
  {
    int j = 1;
    while (n >= j)
    {
      cout << n-j+1 << " ";
      j=j+1;
    }
    cout << endl;
    i = i + 1;
  }*/

  /*Pattern 4: print counting in n rows
  int i = 1, n, count=1;
  cout << "Enter the value of n : ";
  cin >> n;
  while (n >= i) {
    int j = 1;
    while (n >= j)
    {
      cout << count << " ";
      count = count + 1;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }*/

  /*Pattern 5: Upper triangle with *
  int i = 1, n;
  cout << "Enter the value of n : ";
  cin >> n;
  while (n >= i) {
    int j = 1;
    while (i>=j)
    {
      cout << " * ";
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }*/

  /*Pattern 6: Lower triangle with row no
  int i=1, n;
  cout << "enter no of rows: ";
  cin >> n;
  while (n>=i){
    int j=1;
    while(i>=j){
      cout << i;
      j=j+1;
    }
    cout << endl;
    i=i+1;
  }*/

  /*Pattern 7:  print counting acc to no of rows
  int i = 1, n, count = 1;
  cout << "enter no of rows: ";
  cin >> n;
  while (n >= i)
  {
    int j = 1;
    while (i >= j)
    {
      cout << count << " ";
      count = count +1 ;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }*/

  /*Pattern 8 FIRST METHOD: col starts with the row no and counting till row no.

  int i = 1, n;
  cout << "enter no of rows: ";
  cin >> n;
  while (n >= i)
  {
    int j = 1;
    int count = i;
    while (i >= j)
    {
      cout << count << " ";
      count = count + 1;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }*/

  /*Pattern 8 SECOND METHOD
  int i = 1, n;
  cout << "enter no of rows: ";
  cin >> n;
  while (n >= i)
  {
    int j = 1;
    while (i >= j)
    {
      cout << i+j-1 << " ";
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  } */

  /*Pattern 9: no of entries in a row = no of col.. entries should be in reverse
  int i = 1, n;
  cout << "enter no of rows: ";
  cin >> n;
  while (n >= i)
  {
    int j = 1;
    while (j<=i)
    {
      cout << i-j+1 << " ";
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }*/

  /*Pattern 10: Print alphabets in col acc to row no
  int i = 1, n;
  cout << "enter no of rows: ";
  cin >> n;
  while (n >= i)
  {
    int j = 1;
    while (j <= n)
    {
      char ch = 'A' + i - 1;
      cout << ch << " ";
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  } */

  /*Pattern 11: Print alphabets in col acc to col no
  int i = 1, n;
  cout << "enter no of rows: ";
  cin >> n;
  while (n >= i)
  {
    int j = 1;
    while (j <= n)
    {
      char ch = 'A' + j - 1;
      cout << ch << " ";
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }*/

  /*Pattern 12: Print alphabets in square matrix
  int i=1, n;
  char start = 'A';
  cout << "Enter no of rows: ";
  cin >> n;
  while(n>=i){
    int j=1;
    while (n>=j)
    {
      cout << start;
      start = start + 1;
      j=j+1;
    }
    cout << endl;
    i = i+1;
  } */

  /*Pattern 13: print alphabets in square matrix. row starting with alphabet same as row no

  int i=1, n;
  cout << "Enter row no";
  cin >> n;

  while (n>=i)
  {
    int j=1;
    while(n>=j){
      char ch ='A'+i+j-2;
      cout << ch;
      j=j+1;
    }
    cout << endl;
    i = i+1;
  }*/

  /*Pattern 14: print alphabets in upper triangle. row starting with alphabet same as row no

  int i=1, n;
  cout << "Enter row no";
  cin >> n;

  while (n>=i)
  {
    int j=1;
    while(i>=j){
      char ch ='A'+i-1;
      cout << ch;
      j=j+1;
    }
    cout << endl;
    i = i+1;
  }*/

  /*Pattern 16: print alphabets in counting in triangle format
  int i = 1, n;
  char ch = 'A';
  cout << "Enter row no";
  cin >> n;

  while (n >= i)
  {
    int j = 1;
    while (i >= j)
    {
      cout << ch;
      ch = ch + 1;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }*/

  /*Pattern 17: print alphabets acc to row no.
  int i = 1, n;
  cout << "Enter row no";
  cin >> n;

  while (n >= i)
  {
    int j = 1;
    while (i >= j)
    {
      char ch = 'A' + i + j - 2;
      cout << ch;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }*/

  /*Pattern 18: alphabets are in decreasing order in col.. and increases in row
  int i = 1, n;
  cout << "Enter row no";
  cin >> n;

  while (n >= i)
  {
    int j = 1;
    char ch = 'A' + n - i;
    while (i >= j)
    {
      cout << ch;
      ch = ch + 1;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }*/

  /*Pattern 19: print alphabets in square matrix and row alphabets should start acc to row no
  int i = 1, n;
  cout << "Enter row no";
  cin >> n;

  while (n >= i)
  {
    int j = 1;
    char ch = 'A' +i-1;
    while (n >= j)
    {
      cout << ch;
      ch = ch + 1;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  } */

  /*pattern 20: spaces with *
  int i = 1, n;
  cout << "Enter row no";
  cin >> n;

  while(n>=i){
    //printing space
    int space = n-i;
    while(space){
      cout << " ";
      space = space - 1;
    }

    //printing *
    int j = 1;
    while(j <= i){
      cout << "*";
      j = j + 1;
    }
    cout << endl;
    i = i +1;
  }*/

  /*Pattern 21: reverse triangle with *
  int i = 1, n;
  cout << "Enter the value of n : ";
  cin >> n;
  while (n >= i)
  {
    int j = 1;
    while (j <= n - i + 1)
    {
      cout << " * ";
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }*/

  /*Pattern 22: Inverted triangle on right with spaces
  int i = 1, n;
  cout << "Enter row no";
  cin >> n;

  while (n >= i)
  {
    // printing space
    int space = i-1;
    while (space)
    {
      cout << " ";
      space = space - 1;
    }

    // printing *
    int j = 1;
    while (j <= n-i+1)
    {
      cout << "*";
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }*/

  /*Pattern 23: pattern 22 with numbers
  int i = 1, n;
  cout << "Enter row no";
  cin >> n;

  while (n >= i)
  {
    // printing space
    int space = i - 1;
    while (space)
    {
      cout << " ";
      space = space - 1;
    }

    // printing *
    int j = 1;
    int count = i;
    while (j <= n - i + 1)
    {
      cout << count;
      j = j + 1;
    }
    cout << endl;
    count = count + 1;
    i = i + 1;
  } */

  /*Pattern 25: triangle with numbers starting with space=n-i
  int i = 1, n;
  cout << "Enter row no";
  cin >> n;

  while (n >= i)
  {
    // printing space
    int space = n-i;
    while (space)
    {
      cout << " ";
      space = space - 1;
    }

    // printing *
    int j = 1;
    int count = i;
    while (i >= j)
    {
      cout << count;
      j = j + 1;
    }
    cout << endl;
    count = count + 1;
    i = i + 1;
  } */

  /*Pattern26: Inverted triangle with row starting with row no in same col no.
  int i = 1, n;
  cout << "Enter row no";
  cin >> n;

  while (n >= i)
  {
    // printing space
    int space = n-i+1;
    while (space)
    {
      cout << " ";
      space = space - 1;
    }

    // printing *
    int j = 1;
    int count = i;
    while (i >= j)
    {
      cout << count;
      count = count + 1;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  } */

  /*Pattern 27:   1
                 121
                12321
  int i = 1, n;
  cout << "Enter row no";
  cin >> n;

  while (n >= i)
  {
    // printing space
    int space = n - i ;
    while (space)
    {
      cout << " ";
      space = space - 1;
    }

    // printing 1st triangle
    int j = 1;
    while (i >= j)
    {
      cout << j;
      j = j + 1;
    }

    // print 2nd triangle
    int start = i - 1;
    while (start)
    {
      cout << start;
      start = start - 1;
    }
    cout << endl;
    i = i + 1;
  } */

  /*Pattern 28 dabang pattern */
  int n;
  cout << "Enter the number of rows" << endl;
  cin >> n;
  int i = 1;
  while (i <= n)
  {
    int j = n;

    while (j >= i)
    {
      cout << n - j + 1;
      j--;
    }
    j = n;
    int spaces = 1;
    while (spaces <= 2 * i - 2)
    {
      cout << "*";
      spaces++;
    }
    while (j >= i)
    {
      cout << j - i + 1;
      j--;
    }

    cout << endl;
    i += 1;
  }
} 