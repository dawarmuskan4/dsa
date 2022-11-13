#include<iostream>
using namespace std;

class Human{

public:
  int height;
  int weight;
  int age;

  int getAge(){
    return this->age;
  }

  int setWeight(int w){
    this-> weight = w;
    return;
  }
};

class Male : private Human{
public: 
  string color;

  void sleep(){
    cout << "Male sleeping" << endl;
    return;
  }

  int getHeight(){
    return this->height;
  }

  void setHeight(int h){
    this->height = h;
    return;
  }
}; 

int main(){
  
  Male m1;
  m1.setHeight(52);
  cout << m1.getHeight() << endl;

  /*Male m1;
  cout << m1.age << endl;
  cout << m1.height << endl;
  cout << m1.weight << endl;
  cout << m1.color << endl;
  m1.setWeight(65);
  cout << m1.weight << endl;
  m1.sleep();*/

}