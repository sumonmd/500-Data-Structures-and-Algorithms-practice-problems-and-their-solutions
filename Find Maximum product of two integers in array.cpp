#include<bits/stdc++.h>
using namespace std;

void Max_Pro(int arr[],int n)
{
    int mx_pro=INT_MIN;
    int max_i,max_j;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if(mx_pro<arr[i]*arr[j]){
                mx_pro = arr[i]*arr[j];
                max_i=i;
                max_j=j;
            }
        }
    }
    cout<<"("<<max_i<<","<<max_j<<")"<<endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Max_Pro(arr,n);

    return 0;
}
