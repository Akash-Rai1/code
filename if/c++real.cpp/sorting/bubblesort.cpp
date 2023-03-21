#include<iostream>
using namespace std;
   void bubble_sort(int arr[], int n)
   {
    int x;
    bool swaap =true;
    for(int i=1 ;i<n;i++)
    {
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1])
            {
                swap(arr[j+1],arr[j]);
                swaap =false;
                x=j;
            }
        }
        if(swaap)
        {
            cout<<"not swaped after "<<x<<endl;
            break;
        }

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   }


int main(){
    int arr[6]={1,2,3,4,5,6};
    bubble_sort( arr, 6);
    return 0;
}