#include<stdio.h>
#include<stdlib.h>
int max(int a[],int n)
{
int max=a[0];int i;
for(i=0;i<n;i++)
{
if(a[i]>max)
max=a[i];
}
return max;
}
void main()
{
int a[200],n,j;
printf("enter the size of array");
scanf("%d",&n);

for(j=0;j<n;j++)
{
a[j]=rand()%100+1;
printf("%d\t",a[j]);
}

int result=max(a,n);
printf("max element is %d",result);
}

