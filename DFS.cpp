#include<bits/stdc++.h>
using namespace std;
#define m 5

vector<int>v[m];
bool visit[m];

void DFS(int s)
{
    if(visit[s]==true)
        return;
    visit[s]=true;
    for(int i=0;i<v[s].size();i++){
        DFS(v[s][i]);
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
    for(int i=1;i<m;i++){
        if(visit[i]){
            cout<<i<<" ";
        }
    }

    return 0;
}
