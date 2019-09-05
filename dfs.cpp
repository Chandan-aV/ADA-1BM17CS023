#include<bits/stdc++.h>
using namespace std;
int visited[20],adj[20][20];
void dfs(int v,int n)
{
	visited[v]=1;
	cout<<v<<endl;
	for(int i=0;i<n;i++)
	{
		if(adj[v][i]==1 && visited[i]==0)
		{ dfs(i,n); }
	}
}
int main()
{
	int i,j,n;
	cout<<"Enter the nodes";
	cin>>n;
	cout<<"Enter values into the matrix"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>adj[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		visited[i]=0;
	}
	for(i=0;i<n;i++)
	{
		if(visited[i]==0)
		{ dfs(i,n); }
	}
	return 0;
}