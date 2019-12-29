#include<stdio.h>
void Maximum(int arr[],int n)
{
    int a,b,c,i;
    a=b=c=-100000;
    for(i=0;i<n;i++){
        if(a<arr[i]){
            c=b;
            b=a;
            a=arr[i];
        }
        else if(arr[i]>b && arr[i]!=a){
            c=b;
            b=arr[i];
        }
        else if(arr[i]>c && arr[i]!=a && c!=b){
            c=arr[i];
        }
    }
    printf("First = %d | Second = %d | Third = %d",a,b,c);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    Maximum(arr,n);

    return 0;
}
