// Two methods below -
/*
Brian Kernighan’s Algorithm:
   1  Initialize count: = 0
   2  If integer n is not zero
      (a) Do bitwise & with (n-1) and assign the value back to n
          n: = n&(n-1)
      (b) Increment count by 1
      (c) go to step 2
   3  Else return count
   
   Refer - gfg
*/

#include <iostream> 
using namespace std; 
class bits
{ 
public: 
    int countSetBits(int n) 
    { 
        int count = 0; 
        while (n) 
        { 
            n &= (n - 1); 
            count++; 
        } 
        return count; 
    } 
}; 

int main() 
{ 
    bits obj; 
    int i ;
    cin>>i;
    cout << obj.countSetBits(i); 
    return 0; 
} 

// -------------------------------------------
// Interative menthod - convert to binary and run counter

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
