#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};
node* Head=NULL;
void create(int value)
{
    node* nptr=new node;
    nptr->data = value;
    nptr->next = NULL;

    if(Head==NULL){
        Head=nptr;
    }
    else{
        node* tptr = Head;
        while(tptr->next!=NULL){
            tptr=tptr->next;
        }
        tptr->next = nptr;
    }
}
void print()
{
    node* ptr = Head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}
void Sort()
{
    node *current = Head, *current2 = current->next, *temp;
    while(current->next->next != NULL)
    {
        if(current->data > current->next->data)
        {
            temp = current;
            current = current2;
            current2 = temp;
        }
        current = current->next;
    }
}
int main()
{
    create(3);
    create(1);
    create(7);
    print();
    Sort();
    print();


    return 0;
}
