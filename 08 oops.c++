// OOPs first program 


#include<iostream>
using namespace std;
class Rectangle 
{
public:
int length;
int breadth;
int area(){
  return length*breadth;
}
int perimeter(){
  return 2*(length+breadth);
}


};

int main()
{
  Rectangle r1;
  r1.length = 10;
  r1.breadth = 5;

  cout<<r1.area()<<endl;
  
}


// Creating an object using pointers

#include<iostream>
using namespace std;


class Rectangle 
{
public:
int length;
int breadth;
int area(){
  return length*breadth;
}
int perimeter(){
  return 2*(length+breadth);
}


};
int main(){
  
  Rectangle r1;
  Rectangle *p;
  p = &r1;
  // In stack memeory

  // In heap memory

  Rectangle *p = new Rectangle;
  
  p->length = 10;
  p->breadth= 20;
  cout<<p->area()<<endl;
  
}


// Data handlling

#include<iostream>
using namespace std;

class Rect{
private:
int length;
int breadth;
public:
void setLength(int l){
  if(l>=0){
    length = l;
  }
  else{
    length = 0;
    
  }
}
void setBreadth(int b){
  if(b>=0){
    breadth = b;
  }
  else{
    breadth = 0;

  } 
}
int getLength(){
  return length;
}
int getBreadth(){
  return breadth;
}
int area(){
  return length*breadth;
}




};
int main(){
  Rect r;
  r.setLength(10);
  r.setBreadth(20);
  cout<<r.area();
  
}

// Constructors

#include<iostream>
using namespace std;


class Rect{
private:
int length;
int breadth;
public:
Rect(int l=1, int b=1){
  length= l;
  breadth = b;
  
  
}
Rect(Rect &r1){
  length = r1.length;
  breadth = r1.breadth;
}
void setLength(int l){
  if(l>=0){
    length = l;
  }
  else{
    length = 0;

  }
}
void setBreadth(int b){
  if(b>=0){
    breadth = b;
  }
  else{
    breadth = 0;

  } 
}
int getLength(){
  return length;
}
int getBreadth(){
  return breadth;
}
int area(){
  return length*breadth;
}


};
int main()
{
  Rect r1(10,5);
  Rect r2(r1);
  
  cout<<r2.area();
}



// Writing fuctions using scope resolution operature

#include<iostream>
using namespace std;

class Rect{
private:
int length;
int breadth;
public:
Rect(int l=1, int b=1);
Rect(Rect &r1);
void setLength(int l);
void setBreadth(int b);
int getLength();
int getBreadth();
int area();
int perimeter();
int isSqure();


};
Rect:: Rect(int l, int b){
  length= l;
  breadth = b;
  
}
Rect:: Rect(Rect &r1){
  length = r1.length;
  breadth = r1.breadth;
}
void Rect:: setLength(int l){
  length= l;
  
}
void Rect:: setBreadth(int b)
{
  breadth = b;
}
int Rect :: area(){
  return length * breadth;
}
int Rect :: perimeter(){
  return 2*(length+breadth);
}
int main()
{
  Rect r1(10, 5);
  cout<<r1.area();
}





// Class for student 

#include<iostream>
using namespace std;

class student{
public:
int roll_no;
string name;
int phone_no;
int marks;
student(int r, string n, int p, int m){
  roll_no = r;
  name = n;
  phone_no = p;
  marks = m;
  if(marks>80){
    cout<<"A grade"<<endl;
  }
  
  
  else if(marks>60){
    cout<<"B Grade"<<endl;
    
  }
  else{
    cout<<"C Grade"<<endl;
  }

}

};
int main(){
student s1 (1, "Rohan", 1234567890, 50);
  cout<<"Roll no: "<<s1.roll_no<<endl;
  cout<<"Name: "<<s1.name<<endl;
  cout<<s1.phone_no<<endl;
  cout<<s1.marks<<endl;

  
}





// Operature overloading 

#include<iostream>
using namespace std;

class  complex{
private:
int real;
int img;
public:
complex(int r=0, int i=0){
  real = r;
  img = i;
  
}
void display(){
  cout<<real<<"+"<<img<<"i"<<endl;
}
complex operator +(complex c){
  complex temp;
  temp.real = real + c.real;
  temp.img = img + c.img;
  return temp;
  
}
};
int main(){
  complex c1(3, 7);
  complex c2(3,4);
  complex c3 = c1+c2;
  c3.display();

  
}



// Operature overloading using friend function 

#include<iostream>
using namespace std;


class complex{
public:
int real;
int img;

complex(int r=0, int i=0){
  real =r;
  img =i;
}
friend complex operator +(complex c1, complex c2);
};
complex operator +(complex c1, complex c2){
  complex temp;
  temp.real = c1.real + c2.real;
  temp.img = c1.img + c2.img;
  return temp;
}
int main(){
  complex c1(3, 7);
  complex c2(3,4);
  complex c3;
  c3 = c1+ c2;
  cout<<c3.real<<"+"<<c3.img<<"i"<<endl;
  
}



