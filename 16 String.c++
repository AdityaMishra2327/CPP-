#include<iostream>
using namespace std;

int main(){
  char s[]= "hello";
  cout<<s<<endl;
}


#include<iostream>
using namespace std;

int main(){
  char s[50];
  cout<<"Enter your name";
  cin.get(s,50);
  cout<<s<<endl;
}

#include<iostream>
#include<cstring>
using namespace std;

int main(){
  char s1[10]= "Good";
  char s2[10]= "Morning";
  strcat(s1, s2);
  cout<<s1<<endl;
}

#include<iostream>
#include<cstring>

using namespace std;
int main()
{
  char s1[20]= "programming";
  char s2[10]= "gram";

  cout<<strstr(s1, s2);
  
}

#include<iostream>
#include<cstring>
using namespace std;

int main()
{

  char c1[10] ="apple";
  char c2[10] ="banana";
  cout<<strcmp(c1, c2);
  
  
}

// Class String

#include<iostream>
#include<string>

using namespace std;
int main()
{

  string str = "Hello";
  cout<<"Enter a String :" ;
  getline(cin, str);

  cout<<str<<endl;
  
}

#include<iostream>
#include<string>

using namespace std;

int main()
{
  string str = "programming";
  cout<<str.substr(3,4);


}

#include<iostream>
#include<string>
using namespace std;

int main()
{
  string str = "Tommarrow";

  string::iterator it;
  for(it= str.begin(); it!=str.end(); it++){
    cout<<*it;
  }
  
  
  
}