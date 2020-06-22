/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    vector <int> v;
  int a,r,count=0;
  cout << "Hello World";
  cin >> a;
  while(a!=0)
  {
      r = a % 2;
      v.push_back(r);
      a = a/2;
  }
  cout<<endl;
  for(int i=v.size()-1; i>=0; i--)
  {
      if(v.at(i) == 1)
      {
          count++;
      }
      cout<<v.at(i);
}
cout<<"Set bit - "<<count;
  return 0;
}
