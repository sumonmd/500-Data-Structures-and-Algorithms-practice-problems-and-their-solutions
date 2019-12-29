#include<bits/stdc++.h>
#define mx 100
using namespace std;

typedef struct
{
    int front,rear;
    int data[mx];
}Struct;
Struct q;
void push(int value)
{
    if(q.rear>mx){
        cout<<"Queue is Full"<<endl;
    }
    else{
        q.data[q.rear]=value;
        q.rear++;
    }
}
void pop()
{
    if(q.front==q.rear-1){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        q.front++;
    }
}
void print()
{
    for(int i=q.rear-1;i>=q.front;i--){
        cout<<q.data[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    q.front = 0;
    q.rear = 0;
    push(5);
    push(6);
    push(1);
    push(2);
    print();
    pop();
    print();

    return 0;
}
