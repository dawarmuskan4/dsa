#include<iostream>
using namespace std;

/*char toLowerCase(char ch){
  if (ch >= 'a' && ch <= 'z'){
    return ch;
  }
  else{
    char temp = ch - 'A' + 'a';
  }
}

bool checkPalindrome(char a[], int n){
  int s= 0;
  int e= n-1;
  while(s<=e){
    if(toLowerCase(a[s])!=toLowerCase(a[e])){
      return 0;
    }
    else{
      s++;
      e--;
    }
  }
  return 1;
}
*/
void reverse(char name[], int n){
  int s=0, e= n-1;
  while(s<e){
    swap(name[s], name[e]);
    s++;
    e--;
  }
  cout <<"Reversed string is " << name << endl;
}

int getLength(char name[]){
  int count = 0;
  for(int i = 0; name[i]!= '\0'; i++){
    count++;
  }
  return count;
}

//Maximum occuring characters
char getMaxOccCharacter(string s){
  int arr[26] = {0};
  for(int i = 0; i<s.length(); i++){
    char ch = s[i];

    //lowercase
    int number = 0;
    if(ch >= 'a' && ch <='z'){
      number = ch - 'a';
    }
    else { //uppercase
      number = ch - 'A';
    }
    arr[number]++;
  }

 // maximum occuring character question - Time complexity O(n) and space complexity - O(1)
  int maxi = -1, ans = 0;
  for(int i=0; i<26; i++){
    if(maxi<arr[i]){
      ans = i;
      maxi = arr[i];
    }
  }
  char finalAns = 'a' + ans;
  return finalAns;
}

int main(){
  /*char arr[5] = {'a', 'b', 10, 'c' , 'd'};
  string s = "ab10cd";
  cout << arr << endl;
  cout << s << endl;
  char name[20];
  cout << "Enter your name " << endl;
  cin >> name;
  int ans = getLength(name);
  cout << "Your string length is " << ans << endl;
  reverse(name, ans);

  cout << "Palindrome or not: " << checkPalindrome(name, ans) <<endl; */
  string s;
  cout << "Enter string " ;
  cin >> s;
  cout << getMaxOccCharacter(s) << endl;
}