
#include<stdio.h>
#include<stdlib.h>
int small(int A[],int k,int n)
{
int i,j,temp;
for(i=0;i<=n-2;i++)
{
for(j=0;j<=n-2-i;j++)
{
if(A[j]>A[j+1])
{
temp=A[j];
A[j]=A[j+1];
A[j+1]=temp;
}
}

}

return(A[k-1]);
}
void main()
{
int A[200],n,k,i,result;
printf("\nHow many elements?");
scanf("%d",&n);
printf("\nenter the elements:");
for(i=0;i<n;i++)
{ scanf("%d",&A[i]) ;}
for(i=0;i<n;i++)
{printf("%d\t",A[i]);}
printf("\nenter value of k ");
scanf("%d",&k);
result=small(A,k,n);
printf("\n%d smallest element is: %d\n",k,result);

}
