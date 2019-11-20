#include<bits/stdc++.h>
using namespace std;

int Duplicate_Element(int arr[],int n)
{

    bool visited[n];
    fill(visited,visited+n,0);
    for(int i=0;i<n;i++){
        if(visited[arr[i]]){
            return arr[i];
        }
        visited[arr[i]]=true;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<Duplicate_Element(arr,n)<<endl;


    return 0;
}
