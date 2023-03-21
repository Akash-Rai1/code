#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n)
{
    for (int i=1;i<n;i++)
    {
        int var = arr[i];
        while(arr[i]<arr[i-1]&&i>0)
        {
            swap(arr[i],arr[i-1]);
            i--;
        }

    }
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
      int arr[6]={1,2,3,4,5,0};
    insertion_sort( arr, 6);
    return 0;
}