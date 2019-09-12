#include<bits/stdc++.h>
using namespace std;
int adj[15][15],visited[15],n;
void bfs(int k)
{
queue<int>q;
visited[k]=1;
q.push(k);
while(!q.empty())
{
int ele=q.front();
q.pop();
cout<<ele<<" ";
for(int i=0;i<n;i++)
{
if(adj[k][i]==1 && visited[i]==0)
{
q.push(i);
visited[i]=1;
}
}
}
}
int main()
{
	int n;
	cout<<"enter the number of nodes";
	cin>>n;
	for(int i=0;i<n;i++)
		visited[i]=0;
		cout<<"enter values into adjacency matrix"<<endl;
for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>adj[i][j];
		}
	}
	cout<<endl;
for(int i=0;i<n;i++)
{
	if(visited[i]==0)
		bfs(i);
}	
return 0;
}