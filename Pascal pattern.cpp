#include<stdio.h>
int len=52;
long long pascal[52][52];

void Pas()
{
    pascal[0][0]=1;
    pascal[1][0]=1;
    pascal[1][1]=1;
    int i,j;
    for(i=2;i<len;i++){
        pascal[i][0]=1;
        for(j=1;j<i;j++){
            pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
        }
        pascal[i][j]=1;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    Pas();
    for(i=0;i<n;i++){
            for(j=0;j<n-i;j++){
                printf(" ");
            }
        for(j=0;j<=i;j++){
            printf("%d ",pascal[i][j]);
        }
        printf("\n");
    }

    return 0;
}
