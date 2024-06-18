// Friend functions

#include<iostream>
using namespace std;


class test{
private:
int a;
protected:
int b;
public:
int c;
friend void fun();

};
void fun(){
  test t;
  t.a=10;
  t.b=20;
  t.c=30;
}
int main(){
  
}
// Friend classes



class  your;
class my{
private:  
int a;
protected:
int b;
public:
int c;
friend your;
};
class your{
  public:
my m;
void fun(){
  m.a=10;
  m.b=20;
  m.c=30;
  
}


};
int main(){
  
}



// static data members

#include<iostream>
using namespace std;

class test{
public:
int a;
static int count;
test(){
  a = 10;
  count++;
  
}
static int getcount(){
  return count;
}



};
int test:: count =0;
int main(){
  test t1;
  cout<<t1.getcount()<<endl;
  cout<<test::getcount();
  
}



//  Examples of static data members

#include<iostream>
using namespace std;
class student{
public:
int rollno;
static int admission ;
student(){
  admission++;
  rollno = admission ;
  
  
}
};
int student:: admission = 0;
int main(){
  student s1, s2;
  cout<<s1.rollno<<endl;
  cout<<s2.rollno<<endl;
  cout<<student::admission<<endl;
}




// Inner classes

#include<iostream>
using namespace std;
class outer{
public:
int a = 10;
static int b;
void fun(){
i.show();
  cout<<i.x<<endl;
  
}
class inner{
public:
int x = 23;
void show(){

  cout<<b<<endl;
}
};
inner i;

};
int outer::b = 20;

int main(){
  
}