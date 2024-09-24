#include<stdio.h>
int n,adj[20][20],r=-1,f=-1,visited[8]={0,0,0,0,0,0,0,0},q[20];
void BFS(int v){
    int i;
    for ( i = 0; i < n; i++)
    {
        if (visited[i]==0 && adj[v][i]==1)
        {
            r++;
            q[r]=i;
            visited[i]=1;
            printf("%d",i);
        }
        
    }
    f++;
    if (f<=r)
    {
        BFS(q[f]);
    }
    
}
int main(){
    int i,j,s;
    printf("Enter your no. of vertices in G:");
    scanf("%d",&n);
    printf("Enter the values to the adj matrix of size %d X %d\n",n,n);
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&adj[i][j]);
        }
        
    }
    printf("Enter the source vertex for BFS : ");
    fflush(stdin);
    scanf("%d",&s);
    f++;
    r++;
    q[r]=s;
    printf("The BFS Traversal is : ");
    printf("%d",s);
    visited[s]=1;
    BFS(s);
    return 0;
}