#include<bits/stdc++.h>
using namespace std;

void rearange(int arr[],int n)
{
    for(int i=1;i<n;i=i+2){
        if(arr[i-1]>arr[i]){
            swap(arr[i-1],arr[i]);
        }

        if(i+1<n && arr[i]<arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rearange(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
