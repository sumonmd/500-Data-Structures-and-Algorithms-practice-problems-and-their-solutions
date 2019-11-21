#include<bits/stdc++.h>
using namespace std;

int arr[100];
int cnt;

void Adjust_From_Bottom(int startIndex,int endIndex)
{
    int item = arr[startIndex];
    int i = startIndex;
    while(i/2>=endIndex){
        if(item<arr[i/2]){
            int data = arr[i/2];
            arr[i/2]=item;
            arr[i] = data;
            i/=2;
        }
        else{
            break;
        }
    }
}

void Adjust_From_Top(int startIndex, int endIndex)
{
    int item = arr[startIndex];
    int i = startIndex*2;

    while(i<=endIndex){
        if(i+1<=endIndex && arr[i+1]<arr[i]){
            i+=1;
        }
        else if(item<=arr[i]){
            break;
        }
        else{
            int data = arr[i];
            arr[i] = arr[i/2];
            arr[i/2] = data;
            i*=2;
        }
    }
}

void insert(int value)
{
    cnt++;
    arr[cnt]=value;
    Adjust_From_Bottom(cnt,1);

}
void remove()
{
    arr[1]=arr[cnt];
    cnt--;
    Adjust_From_Top(1,cnt);
}

void HeapSort()
{
    for(int i=cnt;i>1;i--){
        int data = arr[i];
        arr[i] = arr[1];
        arr[1] = data;

        Adjust_From_Top(1,i-1);
    }


}
void print()
{
    cout<<"Heap : ";
    for(int i=1;i<=cnt;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    insert(50);
    insert(30);
    insert(500);
    insert(4);
    insert(56);
    insert(40);
    print();
    remove();
    print();
    HeapSort();
    print();

    return 0;
}
