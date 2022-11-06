#include<iostream>
using namespace std;

//Reverse string using recursion

void reverse(string &str, int i, int j){
  cout << "call received for " << str << endl;
  if(i>j){
    return;
  }
  swap(str[i],str[j]);
  i++;
  j--;

  return reverse(str, i, j);
}

bool checkPalindrome(string str, int i, int j){
  if(i>j){
    return true;
  }
  if(str[i]!=str[j]){
    return false;
  }
  else{
    return checkPalindrome(str, i+1, j-1);
  }
}

int main(){
  string name= "abbccbba";
  cout << endl;
  //reverse(name, 0 , name.length()-1 );
  bool isPalindrome = checkPalindrome(name, 0, name.length()-1);
  if(isPalindrome){
    cout << "yes" << endl;
  }else{
    cout << "no" << endl;
  }
  //cout << name << endl;
}