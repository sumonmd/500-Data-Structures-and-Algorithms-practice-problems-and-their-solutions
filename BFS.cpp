#include<bits/stdc++.h>
using namespace std;
int m=4;
vector<int>v[m];
bool visit[m];

void BFS(int s,int d)
{
    visit[s]=true;
    queue<int>q;
    q.push(s);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i=0;i<v[u].size();i++){
            int p = v[u][i];
            if(!visit[p]){
                visit[p]=true;
                q.push(p);
            }
        }
    }
}
int main()
{
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }


    return 0;
}
