#include<stdio.h>
#include<string.h>
char x[5]={'K','E','E','P'}, y[5]={'B','E','E','P'}, print_lcs[5];
int LCS[20][20];
void lcs_calculate(){
    int m,n,i,j,len;
    printf("Sequence 1 is: %s\n",x);
    printf("Sequence 2 is: %s\n",y);
    m=strlen(x);
    n=strlen(y);
    for(i=0;i<=n;i++){
        LCS[0][i]=0;
    }
    for(j=0;j<=m;j++){
        LCS[j][0]=0;
    }
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= m; j++)
        {
            if (x[i-1]==y[j-1])
            {
                LCS[i][j]=LCS[i-1][j-1]+1;
            }
            else if(LCS[i][j-1]>=LCS[i-1][j]){
                LCS[i][j]=LCS[i-1][j];
            }
            else
            {
                LCS[i][j]=LCS[i][j-1];
            }
        }
        
    }
    len=LCS[m][n];
    printf("\n");
    i=m;
    j=n;
    while (i>0 && j>0)
    {
        if (x[i-1]==y[j-1])
        {
            print_lcs[len-1]=x[i-1];
            i--;
            j--;
            len--;
        }
        else if (LCS[i-1][j]>=LCS[i][j-1])
        {
            i--;
        }
        else
        {
            j--;
        }
        
    }
    printf("Longest Common Subsequence is : %s",print_lcs);
}
int main(){
    lcs_calculate();
    return 0;
}