#include <iostream>
using namespace std;
 /*int pow(int a , int b ){
    int ans = 1;
    for (int i = 0; i <b ; i++)
    {
     ans = ans * a; 
    }
    return ans ;
    }
int main ()
{
    int a,b;
    cin >> a >> b;
   int c = pow(a,b);
   cout <<"ANS IS "<< c << endl ;
}
*/



int fact(int n)
{
int ans = 1;
for (int i =1; i <= n ; i++)
{
  ans = ans * i ;
}
  return ans;
}
int nCr (int n , int r)
{
    int num = fact(n);
    int den = fact(r) * fact(n-r);
    int ans = num / den ;
     return ans ;
}
int main(){
    int n , r ;
    cin >> n >> r ; 
    cout<<"ans is "<<nCr(n,r)<< endl ; 
}