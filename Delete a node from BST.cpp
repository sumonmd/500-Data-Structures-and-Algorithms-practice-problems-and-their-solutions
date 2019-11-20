#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* left,*right;
};
node* Root = NULL;

void insert(int value)
{
    node* nptr = new node;
    nptr->data = value;
    nptr->left = NULL;
    nptr->right = NULL;
     if(Root==NULL)
        Root = nptr;
     else{
        node* tptr = Root;
        while(1){
                if(tptr->data > value){
                    if(tptr->left == NULL){
                        tptr->left = nptr;
                        break;
                    }
                    else{
                        tptr = tptr->left;
                    }
                }
                else{
                    if(tptr->right==NULL){
                        tptr->right = nptr;
                        break;
                    }
                    else{
                        tptr=tptr->right;
                    }
                }

        }
     }
}
node* FindMax(node* root)
{
    while(root->right!=NULL){
        root = root->right;
    }
    return root;
}
node* Delete(node* root,int data)
{
    node* temp;
    if(root==NULL){
        cout<<"Empty Tree"<<endl;
    }
    else if(data < root->data){
        root->left = Delete(root->left,data);
    }
    else if(data > root->data){
        root->right = Delete(root->right,data);
    }
    else{
        if(root->left && root->right){
            temp = FindMax(root->left);
            root->data = temp->data;
            root->left = Delete(root->left,temp->data);

        }
        else{
            temp = root;
            if(root->left==NULL){
                root=root->right;
            }
            if(root->right==NULL){
                root=root->left;
            }
            free(temp);
        }
    }
    return root;
}
void print(node* root)
{
    if(root!=NULL){
        print(root->left);
        cout<<root->data<<" ";
        print(root->right);
    }
}
int main()
{
    insert(4);
    insert(2);
    insert(1);
    insert(8);
    insert(5);
    insert(9);
    insert(7);
    insert(6);
    print(Root);
    cout<<endl;
    cout<<Delete(Root,8)->data<<endl;
    print(Root);



    return 0;
}
