#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,k,n,a[10][10],indeg[10],flag[10],count=0;
cout<<"enter the size: ";
cin>>n;
cout<<"enter the values into the adjacency matrix "<<endl;
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
		cin>>a[i][j];
}
for(i=0;i<n;i++)
{
indeg[i]=0;
flag[i]=0;
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
indeg[i]=indeg[i]+a[j][i];
}
}
while(count<n)
{	
	for(k=0;k<n;k++)
	{
		if((indeg[k]==0)&&(flag[k]==0))
		{
			cout<<k+1<<" ";
			flag[k]=1;}
			for(i=0;i<n;i++)
			{
				if(a[i][k]==1)
					{ indeg[k]--; }
			}
	}	
		
	count++;
}
return 0;
}
