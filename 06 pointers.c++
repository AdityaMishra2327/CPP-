#include<iostream>
using namespace std;

int main()
{
 int a =10;
  int *p;
  p= &a;
  cout<<a<<endl;
  cout<<p<<endl;
  cout<<*p<<endl;
  cout<<&a<<endl;
  cout<<&p<<endl;
}



#include<iostream>
using namespace std;

int main(){
  int x = 10;
  int &y =x;
  x++;
  y++;
  cout<<x<<endl;
  cout<<y<<endl;
  cout<<"Address of x"<<&x<<endl;
  cout<<"Address of y"<<&y<<endl;
}

