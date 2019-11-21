#include<bits/stdc++.h>
using namespace std;
int arr[10010];
int cnt=0;
void adj_from_bottom(int startIndex,int endIndex)
{
    int i = startIndex;

    while(i/2>=1){
        if(arr[i]<arr[i/2]){
            int temp = arr[i];
            arr[i] = arr[i/2];
            arr[i/2]=temp;
            i/=2;
        }
        else{
            break;
        }
    }

}

void adj_from_top(int startIndex,int endIndex)
{
    int i= startIndex*2;
    while(i<=cnt){
        if(arr[i/2]>arr[i]){
            int temp = arr[i];
            arr[i] = arr[i/2];
            arr[i/2] = temp;
            i*=2;
        }
        else{
            break;
        }
    }
}
void push(int data)
{
    cnt++;
    arr[cnt]=data;
    adj_from_bottom(cnt,1);
}
void Delete()
{
    arr[1]=arr[cnt];
    cnt--;
    adj_from_top(1,cnt);
}
void print()
{
    for(int i=1;i<=cnt;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    push(9);
    push(1);
    push(4);
    push(2);
    push(7);
    print();
    Delete();
    print();


    return 0;
}
