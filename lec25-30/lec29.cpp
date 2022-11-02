#include<iostream>
using namespace std;

int main(){
//creating 2d array using dynamic memory allocation

  int row;
  cout << "Enter value of row " ;
  cin >> row;

  int col; 
  cout << "Enter value of col " ;
  cin >>col;

  int** arr = new int*[row];
  for(int i=0; i<row; i++){
    arr[i] = new int[col];
  }
  //creating done

  //taking input 
  cout << "Enter array elements " ;
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      cin >> arr[i][j];
    }
  }

  //showing output
  for(int i=0;i<row;i++){
    for(int j=0; j<col; j++){
      cout << arr[i][j] << " ";
    }cout << endl;
  }

  //releasing memory
  for(int i=0; i<row; i++){
    delete []arr[i]; //deletes every col memory corresponding to rows
  }
  delete []arr; //deletes the rows memory
}