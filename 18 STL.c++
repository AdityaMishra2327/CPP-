// Stl (vector)


#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> v = {1,2,3,4,5,6,7,8,9,10};
  v.push_back(45);
  v.push_back(25);
  v.pop_back();
  for(int x: v)
    cout<<x<<endl;
cout<<endl;
  vector <int> :: iterator itr;
  for(itr = v.begin(); itr != v.end(); itr++){
    cout<<++*itr<<endl;
  }
  for(int x: v)
    cout<<x<<endl;
}



// Forward lists


#include<iostream>
#include<forward_list>
using namespace std;

int main(){
  forward_list<int> v = {1,2,3,4,5,6,7,8,9,10};
  v.push_front(45);
  
  for(int x: v)
    cout<<x<<endl;
}



// Map


#include<iostream>
#include<map>

using namespace std;
int main(){
  map<int, string> m;
  m.insert(pair<int, string>(1, "A"));
  m.insert(pair<int, string>(2, "B"));
  m.insert(pair<int, string>(3, "C"));

  map<int, string>::iterator itr;
  for(itr = m.begin(); itr != m.end(); itr++){
    cout<<itr->first<<" "<<itr->second<<endl;
  }

  map<int, string>::iterator itr1;
  itr1 = m.find(2);
  cout<<"value found"<<endl;
  cout<<itr1->first<<" "<<itr1->second<<endl;
}
