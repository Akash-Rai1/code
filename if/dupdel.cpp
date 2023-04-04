#include <iostream>
using namespace std;
  int size;
 void insert(int b[], int x){
     b[size]=x;
 }
int search(int a[],int key,int n)
{
    int x=key;
    for (int i=0;i<n;i++)
    {
        if(x==a[i])
        return 0;
        
        
    }
    
    return 1;
    
}
void display (int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void delDup(int a[],int n)
{
    int x;
    int b[n];
    for(int i=0;i<n;i++)
    
    {
      x=a[i];
      for(int j=0;j<n;j++)
      {
          if(search(b,x,n))
          {
            insert(b,x);
            size++;
          }
      }
        
    }
    display(b,size);
    cout<<"done";
}

int main() {
    int arr[5]={1,2,3,4,3};
    delDup(arr,5);
    size=0;
    
   

    return 0;
}