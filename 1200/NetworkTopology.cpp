#include<bits/stdc++.h>
using namespace std;

int main(){	
	int i,j,k;
    int u,v;
    int n,m;
    cin>>n>>m;
	map<int,vector<int> > adj;
    for(i=0;i<m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool star=false;
    int sum=0,sum2=0;
    for(i=1;i<=n;i++)
    {
        if(adj[i].size()==m)
            star=true;

        else if(adj[i].size()==1)
            sum++;

        else if(adj[i].size()==2)
            sum2++;
    }

    if(star)
    {
        cout<<"star topology";
        return 0;
    }

    if(sum==2 && sum2==n-2)
    {
        cout<<"bus topology";
        return 0;
    }

    if(sum2==n)
        cout<<"ring topology";

    else
        cout<<"unknown topology";

    return 0;
}
