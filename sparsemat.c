#include<stdio.h>
void main(){

    int i,j,m,n,a[100][100],b[100][100],k;
    printf("enter the row and coloumn of the sparse matrix");
    scanf("%d%d",&m,&n);
            
            printf("enter the sparse matrix");
            for ( i = 0; i < m; i++)
            {
                for ( j = 0; j < n; j++)
                {
                    scanf("%d",&a[i][j]);
                }
                
            }
            for ( i = 0; i < m; i++)
            {
               for ( j = 0; j < n; j++)
               {
                if (a[i][j]!=0)
                {
                    b[k][0]=i;
                    b[k][1]=j;
                    b[k][2]=a[i][j];
                 k++;
        
                  
                }
                
               }
               
            }
            for ( i = 0; i < k; i++)
            {
               for (j= 0; j< 3;j++)
               {
                printf("%d\t",b[i][j]);
               }
               printf("\n");
               
            }
            
            




}