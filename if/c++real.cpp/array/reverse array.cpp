#include<iostream>
#include<climits>
using namespace std;
int reverse(int arr[],int size)
{
    int b;
    for(int i=0;i<=size;i++)

    {
        swap(arr[i],arr[i+1]);
    //  b=arr[size];

    //     arr[size]=arr[i];
    //     arr[i]=b;
    i++;
         size--;
    }
    cout<<arr[0];
    cout<<arr[1];
    cout<<arr[2];
    cout<<arr[3];
    cout<<arr[4];
    cout<<arr[5];
    cout<<arr[6];
}

int main()

{
        int ara[7]={1,2,3,4,5,6,7};
        reverse(ara,6);
    
    return 0;
}