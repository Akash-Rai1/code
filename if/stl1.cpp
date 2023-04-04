#include<bits/stdc++.h>

using namespace std ;
int main(){
  array<int,10> arr ;// this is way to declare an new array of integar and size 10

   arr.fill(5); // fill complete array element with 5 to do this array should be declRED IN SAME WAY 
               // if array is declared like int arr[10]={1} ist element will be one nad rest will become 0
     //cout<<arr.at(5);//   cout<<arr[0]<<endl; do the same work

/*iterators
array addressing is continuious 
begin()->it will point first index
rbegin()-> it stand for revese begin means it will point at last index
end()-> this will point at the address right afterthe last index
rend()-> this will point at address right before first index
*/
for(auto it= arr.begin(); it!= arr.end();it++){
    cout<<*it<<" ";
    
}
    // if you use rbegin()or rend()it print array in reverse order without using i-- i++ is correct for r brgin also
    // it is a pointer so we have to use* 



//more simpler method to use for looop is 
/*
this is known as for each loop and it is not limeted to to array we can use it for string too jst at place af arr wrute the name of string 
for(auto i: arr){
    cout<<i<<" ";
}
*/


cout<<arr.size();

}