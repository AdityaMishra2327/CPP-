/include<iostream>
using namespace std;
int max(int x, int y, int z){
  if(x>y && x>z)
    return x;
  else if (y>x && y>z)
    return y;
  else
    return z;
}

int main()
{
  int a = 10, b = 5, c = 15;
  int s = max(a,b,c);
  cout<<s<<" is the largest number"<<endl;
}

