#include <stdio.h> 
#include<iostream>
using namespace std;
bool check(int arr[],  int n) 
{ 
    for (int i=0; i<=(n-2)/2; i++) 
    { 
         if (arr[2*i +1] > arr[i]) 
               return false;
         if (2*i+2 < n && arr[2*i+2] > arr[i]) 
                return false;
  
     
    }
    return true;
} 
int main() 
{ 
    int arr[20],n;
   cout<<"Enter the number of elements:"<<endl;
   cin>>n;
cout<<"enter the array elements :"<<endl;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
if(check(arr, n)==true)
cout<<"TRUE,IT IS A BINARY MAX HEAP!"<<endl;
else
cout<<"FALSE,IT IS NOT A BINARY MAX HEAP!"<<endl;
return 0; 
} 

