// Writing in the file 


#include<iostream>
#include<fstream>
using namespace std;

int main(){
  ofstream of("My.txt", ios::trunc);
  of<<"Hello World";
  of.close();
  
}


// reading data from the file

#include<iostream>
#include<fstream>

using namespace std;

int main(){
  ifstream ifs("My.txt");
  ifs.open("My.txt");
if(ifs.is_open()){
  cout<<"File is opened"<<endl;
}


  string str;
  int a;
  ifs>>str;
  ifs>>a;
  cout<<str<<endl;
  cout<<a<<endl;
  if(ifs.eof()){
    cout<<"End of file reached"<<endl;
  }
  ifs.close();
}



// READING THE STUDENT CLASS


#include<iostream>
#include<fstream>
using namespace std;
class student{
public:
string name;
int rollno;
int room ;

};

int main(){
  student s1 ;
  s1.name = "aditya";
  s1.rollno = 7;
  s1.room = 503;
  ofstream of("My.txt", ios::trunc);
  of<<s1.name<<endl;
  of<<s1.rollno<<endl;
  of<<s1.room<<endl;
  of.close();

}



