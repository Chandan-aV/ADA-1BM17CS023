#include <bits/stdc++.h> 
using namespace std; 
#define N 5 
int ptr[50]; 
void smallestRange(int arr[][N], int n, int k) 
{ 
      int i,min,max,minrange,minel,maxel,flag,minind; 
        for(i = 0;i<= k;i++)  
        ptr[i] = 0; 
        minrange = INT_MAX; 
        while(1)        
      { 
          minind = -1;  
          min = INT_MAX; 
          max = INT_MIN; 
          flag = 0; 
  for(i = 0;i < k;i++)    
          {     
               
              if(ptr[i] == n)    
              { 
                flag = 1; 
                break; 
              } 
              
              if(ptr[i] < n && arr[i][ptr[i]] < min)   
              { 
                  minind=i;  
                  min=arr[i][ptr[i]]; 
              } 
              
              if(ptr[i] < n && arr[i][ptr[i]] > max)     
              { 
                  max = arr[i][ptr[i]]; 
              } 
          } 
          if(flag)  
            break; 
          ptr[minind]++; 
          if((max-min) < minrange)   
          { 
              minel = min; 
              maxel = max; 
              minrange = maxel - minel; 
          } 
      } 
        
      printf("The smallest range is [%d , %d]\n",minel,maxel); 
}     
int main() 
{ 
    int arr[][N] = { 
                    {4, 7, 9, 12, 15}, 
                    {0, 8, 10, 14, 20}, 
                    {6, 12, 16, 30, 50} 
                    }; 
  
    int k = sizeof(arr)/sizeof(arr[0]); 
    smallestRange(arr,N,k); 
    return 0; 
} 
