#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
node* Head = NULL;

void insert(int value)
{
    node* nptr = new node;
    nptr->data = value;
    nptr->next = NULL;
    if(Head==NULL){
        Head=nptr;
    }
    else
    {
        node* tptr = Head;
        while(tptr->next!=NULL){
            tptr = tptr->next;
        }
        tptr->next = nptr;
    }
}
void sortInsert()
{

        node* i,*j;
        int temp;
        for(i=Head;i!=NULL;i=i->next){
            for(j=Head;j->next!=NULL;j=j->next){
                if(j->data > j->next->data){
                    temp = j->data;
                    j->data = j->next->data;
                    j->next->data = temp;
                }
            }
        }

}

void remove_duplicate()
{
    node* nptr = Head;
    while(nptr->next!=NULL){
        if(nptr->data==nptr->next->data){
            nptr->next = nptr->next->next;
        }
        nptr=nptr->next;
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

void remove_evenNode()
{
    node* tptr = Head;
    while(tptr->next!=NULL){
        tptr->next = tptr->next->next;
        tptr = tptr->next;
    }
}

int main()
{
    insert(5);
    insert(6);
    insert(7);
    insert(1);
    insert(4);
    insert(5);
    print();
    sortInsert();
    print();
    remove_duplicate();
    print();
    remove_evenNode();
    print();


    return 0;
}
