#include<iostream>
using namespace std;
int binarysearch(int arr[], int size, int key){
    int start=0;
    int end =size-1;
    int mid= start+ (end-start)/2;
    while(start<=end)
    {
        if(key == arr[mid])
        return mid;
        if(key < arr[mid])
        end=mid-1;
        if(key > arr[mid])
        start=mid+1;

        mid= start+ (end-start)/2;

    }
    return -1;
}
void fstocc(int index,int arr[]){
    int a=arr[index];
    while(arr[index-1]==a)
    {
        index--;
    }
    cout<<index;
}
// void fstocc(int index,int arr[]){
//     int a=index;
//     while(arr[a-1]=arr[index])
//     {
//         a--;
//     }
//     cout<<a;
// }
int lstocc(int index,int arr[]){
    int i=index;
    while(arr[i+1]==arr[index])
    
    {
        i++;

    }
cout<<i;
}

int main(){
    // int even[]={1,2,3,4,5,6};
    // int odd[]={1,2,3,4,5,};
    int sharr[]={0,1,1,2,2,2,2,2,2,2,2,2,2,3,3};
    int index = binarysearch(sharr,15,2);
    cout<<"index of 5 in even array is :"<<index<<endl;
    cout<<"first occ of 2 is ";
     fstocc(index,sharr);
     cout<<endl;
    cout<<"last occ of 2 is ";
     lstocc(index,sharr);

    return 0;
}