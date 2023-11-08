#include<stdio.h>
int adj[10][10], visited[10],n;
void DFS(int v){
    int j;
    printf("%d",v);
    visited[v]=1;
    for ( j = 0; j < n; j++)
    {
        if (visited[j]==0 && adj[v][j]==1)
        {
            DFS(j);
        }
        
    }
    
}
void main(){
    int i,j,k,s;
    printf("Enter the number of vertices in G:");
    scanf("%d",&n);
    printf("Enter the value to the adjecent matrix :\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&adj[i][j]);
        }
        
    }
    for ( i = 0; i < n; i++)
    {
        visited[i]=0;
    }
    printf("Enter the Source vertex for DFS : ");
    scanf("%d",&s);
    printf("The DFS Traversal is : ");
    for ( k = 0; k < n; k++)
    {
        if (k!=s && visited[k]==0)
        {
            DFS(k);
        }
        
    }
    
}