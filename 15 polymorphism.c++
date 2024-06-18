// Polymorphism

// Function overriding 


#include<iostream>
using namespace std;

class base{
public:
void fun(){
  cout<<"fun of base"<<endl;
}
};
class derived:public base{
public:
void fun(){
  cout<<"fun of derived"<<endl;
}
};
int main(){
  derived d;
  d.fun();
}



// Virtual Functions 

#include<iostream>
using namespace std;

class bcar{
public:
 virtual void start(){
  cout<<"Bcar started"<<endl;
}
};
class Acar:public bcar{
public:
void start(){
  cout<<"Acar started"<<endl;
}
};
int main(){
  bcar *b;
  b= new Acar();
  b->start();
  
}


// Runtime polymorphism


#include<iostream>
using namespace std;

class car{
public:
 virtual void start() = 0;
};
class BMW:public car{
public: 
void start(){
  cout<<"BMW started"<<endl;
}
};
class audi:public car{
public:
void start(){
  cout<<"audi started"<<endl;
}
};
int main(){
  car * p;
  p= new BMW();
  p->start();
  p= new audi();
  p->start();
}





// Achieving polymorphism by abstract classes 

#include<iostream>
using namespace std;

class base{
public:
virtual void start()=0;
};
class derived:public base{
public:
void start(){
  cout<<"derived started"<<endl;
}
};
int main(){
  //derived d;
  //d.start();

  base*p;
  p = new derived();
  p->start();
}