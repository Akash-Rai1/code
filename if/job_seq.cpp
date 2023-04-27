#include<iostream>
#include<algorithm>
using namespace std;

typedef struct job{
    int num;
    int duration;
    int profit;

} job;

bool compare(job p1, job p2) {
    return p1.profit < p2.profit;
}   //compare 1st value of jobs array with second and return a bool value used in sort in main function
int maxe=0;
int max(int arr[],int n){
    for(int i=0;i<n;i++){
    if(maxe<arr[i]){
        maxe=arr[i];
    }
    }
    return maxe;


}


int main(){
    int n ;
    cout<<"no. of job";
    cin>>n;
    cout << endl;
    job jobs[n];
    int max_dur[n];
    int dur,prf;
    for (int i = 0; i < n; i++){
        cout<<"enter the duration of "<<i+1<<" th process";
        cin>>dur;
        jobs[i].duration =dur;
        max_dur[i]=dur;
        cout<<"enter the profit of "<<i+1<<" th process";
        cin>>prf;
        jobs[i].profit =prf;
        jobs[i].num = i+1;


    }
    sort(jobs, jobs+n, compare);
    int last= max(max_dur,n);
    
  





}
