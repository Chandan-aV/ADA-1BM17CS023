#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,temp,flag=0,low=0,high=0,mid,a[100],key ;
clrscr();
printf("\nenter the no of ele");
scanf("%d",&n);
high=n-1;
printf("\nenter the array ele");
for(i=0;i<n;i++)
{
a[i]=rand()%100;
}
printf("\nthe array ele are");
for(i=0;i<n;i++)
printf(" %d",a[i]);
for(i=0;i<n-1;i++)
{
 for(j=0;j<n-i-1;j++)
 {
  if(a[j]>a[j+1])
  {
   temp=a[j];
   a[j]=a[j+1];
   a[j+1]=temp;
   }
   }
   printf("\nthe array after sorting");
   for(i=0;i<n;i++)
   printf("  %d",a[i]);
   printf("\nenter the search ele");
   scanf("%d",&key);
   while(low<=high)
   {
   mid=(low+high)/2;
   if(a[mid]==key)
   {
   printf("element found at pos %d",mid);
   flag=1;
   break;
   }
   else
   if(key<a[mid])
   {
   high=mid-1;
   }
   else{
   low=mid+1;
   }
   }
   if(flag!=1)
   {
   printf("ele not found");

}   }
getch();
}
