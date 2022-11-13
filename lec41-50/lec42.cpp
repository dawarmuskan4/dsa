#include<iostream>
#include<string.h>
using namespace std;

class Hero{
  //properties
  int health;

public:
  char *name;
  char level;
  static int timeToComplete;
  //default constructor
  Hero(){
    cout << "Default Constructor called " <<endl; 
    name = new char[100];
  }

  //parameterized constructor
  Hero(int health){
    cout << "Parameterized constructor called " << endl;
    cout << "this -> " << this << endl;
    this -> health = health;
  }

  //copy constructor
  Hero(Hero& temp){
    char *ch = new char[strlen(temp.name)+1];
    strcpy(ch, temp.name);
    this-> name = ch;

    cout << "Copy constructor called" << endl;
    this->health = temp.health;
    this->level = temp.level;
  }

  Hero(int health, char level){
    this->level = level;
    this->health = health;
  }

  void print(){
    cout << endl;
    cout << "Name " << name << endl;
    cout << "Health " << health << endl;
    cout <<"Level " << level << endl;
    cout << endl;
  }

  int getHealth(){
    return health;
  }

  char getLevel(){
    return level;
  }

  void setHealth(int h){
    health = h;
  }

  void setLevel(char ch){
    level = ch;
  }

  void setName(char name[]){
    strcpy(this->name, name);
  }

  static int random(){
    return timeToComplete;
  }

  ~Hero(){
    cout << "Destructor called" << endl;
  }
};

int Hero::timeToComplete = 5;

int main(){
  cout << Hero::timeToComplete << endl;
  cout << Hero::random() << endl;

  Hero a;
  cout << a.timeToComplete << endl;

  Hero b;
  b.timeToComplete = 10;

  cout << a.timeToComplete << endl;
  cout << b.timeToComplete << endl;

  /*Hero a;
  Hero *b = new Hero();
  delete b;
  Hero hero1;
  hero1.setHealth(12);
  hero1.setLevel('d');
  char name[7] = "Babbar";
  hero1.setName(name);

  hero1.print();

  Hero hero2(hero1);
  hero2.print();

  name[0]= 'G';
  hero1.setName(name);
  hero1.print();

  hero2.print();


  //object - static allocation
  Hero h1(10);
  cout << "address of ramesh is " <<  &h1 << endl;
  h1.getHealth();
  Hero *h = new Hero;

  //copy constructor
  Hero S(70, 'C');
  S.print();
  Hero R(S);
  R.print();

  Hero Ramesh;
  Ramesh.setHealth(70);
  Ramesh.level = 'A';
  cout << "health is " << Ramesh.getHealth() << endl;
  cout << "level is " << Ramesh.getLevel() << endl;

  // object- dynamic allocation

  h->setHealth(80);
  h->setLevel('B');
  cout << "health is " << (*h).getHealth() << endl;
  cout << "level is " << (*h).getLevel() << endl;

  cout << "health is " << h->getHealth() << endl;
  cout << "level is " << h->getLevel() << endl; */
}