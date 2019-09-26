#include <stdio.h>
int N;
int board[100][100];
int isvalid(int i,int j)
{
    int k,l;
    
    for(k=0;k<N;k++)
    {
        if((board[i][k] == 1) || (board[k][j] == 1))
            return 1;
    }
    
    for(k=0;k<N;k++)
    {
        for(l=0;l<N;l++)
        {
            if(((k+l) == (i+j)) || ((k-l) == (i-j)))
            {
                if(board[k][l] == 1)
                    return 1;
            }
        }
    }
    return 0;
}

int Nqueen(int n)
{
    int i,j;

    if(n==0)
        return 1;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
           
            if((!isvalid(i,j)) && (board[i][j]!=1))
            {
                board[i][j] = 1;
                
                if(Nqueen(n-1)==1)
                {
                    return 1;
                }
                board[i][j] = 0;
            }
        }
    }
    return 0;
}

int main()
{
    
    printf("Enter the order of the matrix\n");
    scanf("%d",&N);

    int i,j;
    
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            board[i][j]=0;
        }
    }
   
    Nqueen(N);
    
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            printf("%d\t",board[i][j]);
        printf("\n");
    }

}
