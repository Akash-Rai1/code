

#include<iostream>
 #include <climits>
using namespace std;
int printarr(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";

    }
    return 0;
}
int getmax(int a[],int size){
    int maxi = INT_MIN;
    for(int i=0;i<10;i++)
    {
        
       maxi = max (maxi,a[i]);
    }
    return maxi;
    
    
}

int main(){
    int a[10];
      for(int i=0;i<10;i++)
      {
        cin>>a[i];
      }
      cout<<getmax(a,10);
    // int max=a[0];
   
    // for(int i=0;i<10;i++)
    // {
        
    //     if(max>=a[i])
    //     max;
    //     else
    //     max=a[i];


    // }
    // cout<<max;
    // int min=a[0];
    // for(int i=0;i<10;i++)
    // {
        
    //     if(min<=a[i])
    //     min;
    //     else
    //     min=a[i];


    // }
    // cout<<endl;
    // cout<<min;

    
     return 0;
}