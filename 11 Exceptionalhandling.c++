// Exception handling 



// throw and catch 


/*#include<iostream>
using namespace std;

int main(){
  int a = 10 , b =0, c;
  try{
    if (b==0)
      throw 1;
    c = a/b;
    cout<<c<<endl;
  }
    catch(int e){
      cout<<"Division by zero"<<endl;
    }
}*/

// throw and catch between functions

/*#include<iostream>
using namespace std;
int division (int a , int b){
  if (b==0)
    throw 1;
  else
    return a/b;
}
int main(){
  
  int a = 10 , b =0, c;
  try{
    c = division(a,b);
    cout<<c<<endl;
  }
    catch(int e){
      cout<<"Division by zero"<<endl;
    }

}*/



// All about throw

#include<iostream>
using namespace std;

int main(){
  int a = 10 , b =0, c;
  try{
    if (b==0)
      throw string ("wtf");
    c = a/b;
    cout<<c<<endl;
  }
    catch(string s){
      cout<<"Division by zero"<<endl;
    }
}

// Template classes

#include<iostream>
using namespace std;
template <class T>
T max(T &a, T &b){
  return a>b?a:b;
}
int main(){
  int i = 5, j = 6, k;
  long l = 10, m = 5, n;
  k = max(i,j);
  n = max(l,m);
  cout<<k<<endl;
  cout<<n<<endl;
}