//   Syntax of Inheritance



#include<iostream>
using namespace std;

class base{
public:
int x;
void show(){
  cout<<x<<endl;
  cout<<"base class show function called"<<endl;
}
};
class derived: public base{
public:
int y;
void display(){
  cout<<y<<endl;
  cout<<"derived class display function called"<<endl;
}

};

int main(){
  derived d;
  d.x=5;
  d.y=10;
  

  d.show();
  d.display();
}


// Examples of inheritence

#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;

    public:
    Rectangle();
    Rectangle(int l,int b);
    Rectangle(Rectangle &r);
    int getLength(){return length;}
    int getBreadth(){return breadth;}

    void setLength(int l);        
    void setBreadth(int b);
    int area();        
    int perimeter();        


};

class Cuboid:public Rectangle
{
    private:
    int height;

  public:
    Cuboid(int h)
    {
        height=h;
    }

    int getHeight(){return height;}

    void setHeight(int h){height=h;}

    int volume(){return getLength()*getBreadth()*height;}

};

int main()
{
    Cuboid c(5);
    c.setLength(10);
    c.setBreadth(7);

    cout<<"Volume is "<<c.volume()<<endl;

}

Rectangle::Rectangle()
{
    length=1;
    breadth=1;
}

Rectangle::Rectangle(int l,int b)
{
    length=l;
    breadth=b;
}

Rectangle::Rectangle(Rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
}

void Rectangle::setLength(int l)
{
    length=l;
}

void Rectangle::setBreadth(int b)
{
    breadth=b;
}

int Rectangle::area()
{
    return length*breadth;
}

int Rectangle::perimeter()
{
    return 2*(length+breadth);
}


// Construtor in inheritence





#include<iostream>
using namespace std;

class base{
public:
base(){cout<<"porum of base"<<endl;}
base(int x){cout<<"parameter of base "<<x<<endl;}

};

class derived:public base{
public:
derived(){cout<<"porum of derived"<<endl;}
derived(int x, int y):base(x)
{
  cout<<"parameter of derived "<<x<<endl;
}
};
int main(){
  derived d(10,20);
}


// " Trying something new"

#include<iostream>
using namespace std;
 class rect{
private:
int length;
int breadth;
public:
void setlength(int l){
  length=l;
}
void setbreadth(int b){
  breadth=b;
}
int getlength(){
  return length;
}
int getbreadth(){
  return breadth;
}

int area(){
  return length * breadth;
}
int perimeter(){
  return 2*(length+breadth);
}
};
int main(){
  rect r;
  r.setlength(10);
  r.setbreadth(20);
  cout<<r.area()<<endl;

  cout<<"Length: "<<r.getlength()<<endl;
  cout<<"Breadth: "<<r.getbreadth()<<endl;
  
}



#include<iostream>
using namespace std;


 class parent{

private: int a ;
protected: int b;
public: int c;

void funparent(){
  a=10;
  b=20;
  c=30;
}
};
class child:public parent{
void funchild(){

  a = 10;
  b = 20;
  c= 30;

}
};
class grandparent:public child{
void fungrandparent(){
  a = 10;
  b = 20;
  c = 30;
}

int main()
{
  child c;
  c.a=10;
  c.b=20;
  c.c=30;
}



// Base class pointer and derived class object

#include<iostream>
using namespace std;

class base{
public: 
void fun1(){
  cout<<"base class fun1"<<endl;
}
};
class derived:public base{
public: 
void fun2(){
  cout<<"derived class fun2"<<endl;
}
};
int main(){
  base * ptr;
  ptr =  new derived();
  ptr->fun1();

  
}


// Examples of base class pointer and derived class object

#include<iostream>
using namespace std;

class Rectangle{
public:
void area(){
  cout<<"Rectangle area"<<endl;
}
};
class Cuboid:public Rectangle{
public:
void volume(){
  cout<<"Cuboid volume"<<endl;
}
};
int main(){
  //Cuboid c;
  //c.area();
  //c.volume();
  Rectangle *ptr;
  ptr= new Cuboid();
  ptr->area();

  
}

// base class pointer and derived class object another example

#include<iostream>
using namespace std;
class Bcar{
public:
void start(){
  cout<<"base class start"<<endl;
}
};
class Acar:public Bcar{
public:
void playmusic(){
  cout<<"Acar playmusic"<<endl;
}
};
int main(){
  Bcar *ptr;
  ptr = new Acar();
  ptr->start();
// basicall we are trying to access the feature of adavance car in basic car 
}