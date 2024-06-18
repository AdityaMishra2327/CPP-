// constants


#include<iostream>
using namespace std;
class demo{
public:
int a = 10;
int b = 20;
void display()
{
  a++;
  cout<<a<<" "<<b<<endl;
}

};
int main()
{
  demo d;
  d.display();

}






// Preprocessor Directives

#include<iostream>
using namespace std;

#define max(a,b) (a>b?a:b)

int main(){

cout<<max(2,3)<<endl;
  
}


// Using namespaces 

#include<iostream> 
using namespace std;
namespace First{
void fun(){
  cout<<"Hello World"<<endl;
}
}
namespace Sec{
  void fun(){
    cout<<"Hello Duniya"<<endl;
  }
}
int main(){
  First::fun();
  Sec::fun();
  
}

