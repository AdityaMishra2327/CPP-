// Destructor in stack memeory


#include<iostream>
using namespace std;
class test{
public:
test(){
  cout<<"Test created"<<endl;;
  
}
~test(){
  cout<<"Test destroyed"<<endl;
}
};
int main(){
  test t; 
  
}


// Destructor in heap memory



#include<iostream>
using namespace std;
class test{
public:
test(){
  cout<<"Test created"<<endl;;

}
~test(){
  cout<<"Test destroyed"<<endl;
}
};
int main(){
  test *t=new test;
  delete t;
  

}



//Virtual  Destructor 


#include<iostream>
using namespace std;
class base{
public:
base(){
  cout<<"Base created"<<endl;
  
}
virtual ~base(){
  cout<<"Base destroyed"<<endl;
}
};
class derived:public base{
public:
derived(){
  cout<<"Derived created"<<endl;
}
~derived(){
  cout<<"Derived destroyed"<<endl;
}
};
int main(){
  base * p = new derived;
  delete p;
}


