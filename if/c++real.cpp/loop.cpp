//this is to count no. of digits in a no.
// #include<iostream>
// #include<math.h>
// using namespace std;

// int main(){
//     int x;
//    cout<<"enter a no.";
//    cin>>x;
//    int count=0;
//    while(x!=0)
//    {
//     x=x/10;
//     count++;
//    }
//    cout<<count;
 
//     return 0;
// }
#include<iostream>
using namespace std;
int fact (int a)
{
    int fac=1;
   for(int i=1; i<=a;i++)
   {
    fac = fac*i;

   }
   return fac ;


}  
int main(){
    cout<<"enter a n"<<endl;
    int n,r ,c;
    cin>>n;
    cout<<"enter a r"<<endl;
    cin>>r;
    c=fact(n)/
             (fact (r) * fact(n-r));
    cout<<c;         

     
  
    return 0;
}