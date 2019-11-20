#include<bits/stdc++.h>
using namespace std;

void remove_zero(int arr[],int n)
{
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[k]=arr[i];
            k++;
        }
    }
    for(int i=k;i<n;i++){
        arr[i]=0;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    remove_zero(arr,n);
    cout<<"After remove zero "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
