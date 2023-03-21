#include<iostream>
using namespace std;
void unique(int arr[],int size)
{
        int tmp,x;
    int aee[size];
    for(int i=0;i<size;i++)
    {
        tmp=arr[i];
        for(int j=1;j<size;j++)
        {
            if(tmp==arr[j])
            {
                if(i!=j)
                for(int j=1;j<size;j++)
                {
                 aee[j]=tmp;
                }


                 
            }
            
        }
    }
                for(int j=1;j<size;j++)
                cout<<aee[j];
}

int main(){
    int m, tmp;
    cout<<"entern length";
    cin>>m;
    int arr[m];
    cout<<"entern elements";

    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    unique(arr,m);

    
    return 0;
}