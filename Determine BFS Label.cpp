#include<bits/stdc++.h>
using namespace std;
#define M 100

vector<int>v[M];
int label[M];
bool visit[M];
queue<int>q;
int ck[M];

void BFS(int s)
{
    q.push(s);
    visit[s]=true;
    label[s]=0;

    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i=0;i<v[u].size();i++){
            int p = v[u][i];
            if(!visit[p]){
                q.push(p);
                visit[p]=true;
                label[p]=label[u]+1;
            }
        }
    }


}

int main()
{
    int e;
    cout<<"Enter Graph Edge:";
    cin>>e;
    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    BFS(1);
    cout<<label[4]<<endl;
}

