#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>

using namespace std;

int main(){
  /*array using Standard Template Library
  int basic[3] = {1,2,3};

  array<int, 4> a = {1,2,3,4};
  int size = a.size();
  for(int i=0; i<size; i++){
    cout << a[i] << endl;
  }
  cout << "Element at 2 index " << a.at(2) <<endl;
  cout << "Empty or not " << a.empty() << endl;
  cout << "First Element "  << a.front() << endl;
  cout << "Last Element " << a.back() << endl; */

  /*Vector using STL
  Vector is dynamic, to explain, like we have a vector
  containing 4 elements and when we try to insert
  the fifth element, the vector would create a copy of
  the original vector with double size, copy the original
  vector elements and store the new element.

  vector<int> v;
  vector<int> a(5,1); //5 tells the size and 1 is the argument with which every vector element will be initialized

  vector<int> last(a); //copies all the elements of vector a in vector last
  cout << "size " << v.capacity() << endl; //caapacity tells space allocated

  v.push_back(1); //adds the element to the last
  cout << "size " << v.capacity() << endl;

  v.push_back(2);
  cout << "size " << v.capacity() << endl;

  v.push_back(3);
  cout << "Capacity " << v.capacity() << endl;
  cout << "size " << v.size() << endl; //tells the number of elements present
  cout << "Element at 1 index " << v.at(1) << endl;
  cout << "First Element " << v.front() << endl;
  cout << "Last Element " << v.back() << endl;

  cout << "Before pop " << endl;
  for(int i:v){
    cout << i << " ";
  }cout << endl;

  v.pop_back(); // removes the last element

  cout << "After pop " << endl;
  for(int i:v){
    cout << i << " ";
  }cout << endl;

  cout << "Before clear size is " << v.size() << endl;
  cout << "Before clear capacity is " << v.capacity() << endl;
  v.clear();
  cout << "After clear size is " << v.size() << endl;
  cout << "After clear capacity is " << v.capacity() << endl; */

  /* DEQUEUE or double ended queue or DQ 
  It means we can apply push and pop, insertion and deletion at the 
  beginning as well as at the end
  Memory storage is not contagious like in case of array and vector.
  Instead we have multiple fixed static arrays and tracking takes place
  that your data is stored in which array.
  It is dynamic and random access is possible

  deque<int> d;
  d.push_back(1);
  d.push_front(2);
  for (int i : d){
    cout << i << " ";
  }cout << endl;

  d.pop_back();
  for (int i : d){
    cout << i << " ";
  }cout << endl;
  d.pop_front();
  for (int i : d){
    cout << i << " ";
  }cout << endl; 

  cout << "Element at 1 index " << d.at(1) << endl;
  cout << "First Element " << d.front() << endl;
  cout << "Last Element " << d.back() << endl;
  cout << "Empty or not " << d.empty() << endl;
  cout << "Before erase " << d.size() << endl;
  d.erase(d.begin(), d.begin()+1); //arguments take (starting position, ending position)
  cout << "After erase " << d.size() << endl; */

  /*List
  Implemented using double-linked list. DLL has two pointers
  one for front and another for back.
  Direct access is not available.


  list<int> l = {1,2,3,4};
  l.push_back(1);
  l.push_front(2);
  for(int i:l){
    cout << i << " ";
  } cout << endl;

  l.erase(l.begin());
  cout << "After erase " << endl;
  for(int i: l){
    cout << i << " ";
  }cout << endl; 
  We have similar functions as we used earlier in array deque etc*/

  /*Stack - LIFO
  stack<string> s;
  s.push("Muskan");
  s.push("Dawar");
  s.push("Kumar");
  cout << "Top element " << s.top() << endl;
  cout << "Size " << s.size() << endl;
  s.pop();
  cout << "Top element " << s.top() << endl;
  cout << "Size " << s.size() << endl;
  cout << "Empty or not " << s.empty() << endl; */

  /*Queue - Line or FIFO
  queue<string> q;
  q.push("Muskan");
  q.push("Dawar");
  q.push("Kumar");
  cout << "Front element" << q.front() << endl;
  q.pop();
  cout << "First element" << q.front() << endl; */

  /*Priority Queue - the list in which first element is always greater
  priority_queue<int> maxi; //maxheap - data when fetched will be always max

  priority_queue<int, vector<int>, greater<int>> mini; // minheap -data when fetched will be always min

  maxi.push(1);
  maxi.push(3);
  maxi.push(2);
  maxi.push(0);
  cout << "Size " << maxi.size() << endl;
  int n = maxi.size();
  for(int i=0; i<n; i++){
    cout << maxi.top() << " " ;
    maxi.pop();
  }cout << endl;

  mini.push(5);
  mini.push(1);
  mini.push(2);
  mini.push(6);
  mini.push(0);
  int m = mini.size();
  for(int i = 0; i<m ; i ++){
    cout << mini.top() << " ";
    mini.pop();
  }
  cout << endl;*/

  /*SET- stores only unique values, doesnt allow modification
  return elemenets in sorted order
  Unordered set == set is slower than unordered set and when we
  implement unorder set, the ans comes in random order

  set<int> s;
  s.insert(4);
  s.insert(6);
  s.insert(2);
  s.insert(3);
  s.insert(7);
  s.insert(5);
  for (auto i : s){
    cout << i << " ";
  }cout << endl;

  set<int>::iterator it = s.begin();
  it++;
  s.erase(it);
  for (auto i : s){
    cout << i << " ";
  }cout << endl;
  cout << "5 present or not " << s.count(5) << endl;

  set<int>::iterator itr = s.find(5);
  for (auto it=itr; it!=s.end(); it++){
    cout << *it << " ";
  }cout << endl; */

  /*Map - stores data in key value format. Every key is unique
  One key can only have one value. Value can be same but no two keys
  can point to diff values.

  map<int , string> m;

  m[1] = "dawar";
  m[2] = "muskan";
  m[3] = "kumar";
  m.insert({5, "Bheem"});
  for(auto i : m ){
    cout << i.first << " " << i.second<< endl;
  }
  cout << "Finding 13 " << m.count(13) << endl;*/

  vector<int> v;
  v.push_back(1);
  v.push_back(3);
  v.push_back(6);
  v.push_back(7);
  cout << binary_search(v.begin(), v.end(), 6) << endl;
}